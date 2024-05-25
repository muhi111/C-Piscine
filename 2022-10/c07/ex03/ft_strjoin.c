/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:57:31 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/22 20:23:50 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (i <= ft_strlen(src))
	{
		dest[len + i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*a;
	int		i;
	int		total_len;

	i = -1;
	total_len = 0;
	while (++i < size)
		total_len += ft_strlen(strs[i]);
	if (size > 1)
		total_len += (ft_strlen(sep) * (size - 1));
	a = (char *)malloc(sizeof(char) * total_len);
	a[0] = '\0';
	if (size == 0)
		return (a);
	i = 0;
	while (i < size)
	{
		a = ft_strcat(a, strs[i]);
		if (i != (size - 1))
			a = ft_strcat(a, sep);
		i++;
	}
	return (a);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *strs[] = {"a", "bc", "def", "ghjklmnop"};
// 	char *sep = " , ";
// 	char *ret = ft_strjoin(4, strs, sep);

// 	printf("return (:\n%s\n", ret);

// 	free(ret);

// 	return (0);
// }