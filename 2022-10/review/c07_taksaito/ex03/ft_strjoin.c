/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksaito <taksaito@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:57:21 by taksaito          #+#    #+#             */
/*   Updated: 2022/10/18 14:57:19 by taksaito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (dest[cnt] != '\0')
		cnt++;
	while (src[i] != '\0')
	{
		dest[cnt] = src[i];
		i++;
		cnt++;
	}
	dest[cnt] = '\0';
	return (dest);
}

int	calc_allocation_size(char **strs, int size, char *sep)
{
	int	i;
	int	str_len;
	int	total_size;
	int	term_count;

	i = 0;
	total_size = 0;
	term_count = 0;
	while (i < size)
	{
		str_len = ft_strlen(strs[i]);
		if (str_len)
			term_count++;
		total_size += str_len;
		i++;
	}
	return (total_size + ft_strlen(sep) * (term_count - 1));
}

char	*allocate_null_str(void)
{
	char	*ret;

	ret = malloc(sizeof(char));
	ret[0] = '\0';
	return (ret);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		i;
	int		m_size;

	m_size = calc_allocation_size(strs, size, sep);
	if (size <= 0 || m_size <= 0)
		return (allocate_null_str());
	ret = malloc(sizeof(char) * (m_size + 1));
	i = 0;
	while (i < size - 1)
	{
		ret = ft_strcat(ret, strs[i]);
		ret = ft_strcat(ret, sep);
		i++;
	}
	ret = ft_strcat(ret, strs[i]);
	return (ret);
}

// int	main(void)
// {
// 	char *str1 = "aizu";
// 	char *str2 = "hoge";
// 	char **strs;
// 	char *ret;

// 	strs = malloc(sizeof(char *) * 2);
// 	strs[0] = str1;
// 	strs[1] = str2;
// 	ret = ft_strjoin(2, strs, ", ");
// 	printf("%s", ret);
// }