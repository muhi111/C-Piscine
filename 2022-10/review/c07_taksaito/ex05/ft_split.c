/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksaito <taksaito@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:49:01 by taksaito          #+#    #+#             */
/*   Updated: 2022/10/18 15:03:16 by taksaito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (true);
		i++;
	}
	return (false);
}

int	get_split_size(char *str, char *charset)
{
	int	cnt;
	int	size;

	size = 0;
	while (*str)
	{
		cnt = 0;
		while (str[cnt] && !is_charset(str[cnt], charset))
			cnt++;
		if (cnt > 0)
			size++;
		str = str + cnt + 1;
	}
	return (size);
}

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**ret;
	int		size;
	int		i;
	int		cnt;

	size = get_split_size(str, charset);
	if (size == 0)
		return (NULL);
	ret = (char **)malloc(sizeof(char *) * size);
	i = 0;
	while (*str)
	{
		cnt = 0;
		while (str[cnt] && !is_charset(str[cnt], charset))
			cnt++;
		if (cnt > 0)
		{
			ret[i] = malloc(sizeof(char) * cnt + 1);
			ft_strncat(ret[i], str, cnt);
			i++;
		}
		str = str + cnt + 1;
	}
	return (ret);
}

// int	main(void)
// {
// 	char *c = "hoge,,aizu,foo,bar";
// 	char **splited;
// 	splited = ft_split(c, ",");
// 	for (int i = 0; i < 4; i++)
// 		printf("%s\n", splited[i]);
// 	return (0);
// }