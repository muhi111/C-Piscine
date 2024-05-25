/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakahar <ysakahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:23:33 by ysakahar          #+#    #+#             */
/*   Updated: 2022/10/17 14:23:33 by ysakahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	full_length(int size, char **strs, char *sep)
{
	int	full_len;
	int	i;

	if (size == 0)
		return (1);
	full_len = 0;
	i = 0;
	while (i < size)
	{
		full_len += ft_strlen(strs[i]);
		i++;
	}
	full_len += ft_strlen(sep) * (size - 1);
	return (full_len + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_ptr;
	int		i;

	str_ptr = malloc(full_length(size, strs, sep) * sizeof(char));
	if (str_ptr == NULL)
		return (NULL);
	str_ptr[0] = '\0';
	if (size == 0)
		return (str_ptr);
	ft_strcat(str_ptr, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(str_ptr, sep);
		ft_strcat(str_ptr, strs[i]);
		i++;
	}
	return (str_ptr);
}
