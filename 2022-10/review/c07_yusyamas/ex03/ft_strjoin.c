/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:58:34 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/21 09:31:57 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define FT_NULL '\0'

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (*str != FT_NULL)
	{
		length += 1;
		str += 1;
	}
	return (length);
}

char	*ft_memcpy(char *dest, char *src, unsigned int len)
{
	while (len > 0)
	{
		*dest = *src;
		dest += 1;
		src += 1;
		len -= 1;
	}
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	length;

	length = ft_strlen(src);
	return (ft_memcpy(dest, src, length));
}

char	*ft_str_cat_large(char *res, int size, char **strs, char *sep)
{
	int		i;
	char	*s;

	i = 0;
	s = res;
	while (i < size)
	{
		s = ft_strcpy(s, strs[i]);
		if (i != size - 1)
			s = ft_strcpy(s, sep);
		i += 1;
	}
	*s = FT_NULL;
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char			*res;
	unsigned int	maxlen;
	int				i;

	if (size == 0)
	{
		res = (char *)malloc(sizeof(char));
		*res = FT_NULL;
		return (res);
	}
	maxlen = 0;
	i = 0;
	while (i < size)
	{
		maxlen += ft_strlen(strs[i]);
		i += 1;
	}
	maxlen += ft_strlen(sep) * (size - 1);
	res = (char *)malloc(sizeof(char) * (maxlen + 1));
	return (ft_str_cat_large(res, size, strs, sep));
}
