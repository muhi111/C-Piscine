/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasaoka <tasaoka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 01:57:55 by tasaoka           #+#    #+#             */
/*   Updated: 2022/10/18 04:25:15 by tasaoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		++charset;
	}
	return (0);
}

int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_in_charset(str[i], charset) == 0)
		++i;
	return (i);
}

int	ft_wordcount(char *str, char *charset)
{
	int	len;
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && ft_is_in_charset(*str, charset) == 1)
			++str;
		len = ft_wordlen(str, charset);
		str += len;
		if (len)
			++count;
	}
	return (count);
}

char	*ft_strcpy(char *src, int n)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * (n + 1));
	if (!dest)
		return (NULL);
	while (i < n && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char		**dest;
	int			size;
	int			i;
	int			len;

	i = 0;
	size = ft_wordcount(str, charset);
	dest = malloc(sizeof(char *) * (size + 1));
	if (!dest)
		return (NULL);
	while (i < size)
	{
		while (ft_is_in_charset(*str, charset))
			++str;
		len = ft_wordlen(str, charset);
		dest[i] = ft_strcpy(str, len);
		str += len;
		++i;
	}
	dest[size] = 0;
	return (dest);
}
