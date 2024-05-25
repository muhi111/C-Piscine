/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:11:33 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/20 22:13:44 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char	*c;

	c = dest;
	while (len > 0)
	{
		*dest = *src;
		dest += 1;
		src += 1;
		len -= 1;
	}
	return (c);
}

char	*ft_strdup(char *src)
{
	char			*dupstr;
	unsigned int	srclen;

	srclen = ft_strlen(src);
	dupstr = (char *)malloc(sizeof(char) * (srclen + 1));
	ft_memcpy(dupstr, src, srclen + 1);
	return (dupstr);
}
