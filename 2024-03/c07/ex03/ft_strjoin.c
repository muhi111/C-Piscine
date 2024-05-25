/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:42:21 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/19 08:44:26 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*result;

	i = -1;
	len = 0;
	if (size <= 0)
	{
		result = malloc(sizeof(char) * 1);
		result[0] = '\0';
		return (result);
	}
	while (++i < size)
		len += ft_strlen(strs[i]);
	result = malloc(sizeof(char) * (len + (size - 1) * ft_strlen(sep) + 1));
	result[0] = '\0';
	i = -1;
	while (++i < size)
	{
		ft_strcat(result, strs[i]);
		if (i != size - 1)
			ft_strcat(result, sep);
	}
	return (result);
}

// #include <stdio.h>
// #include <stdio.h>
// int main(void){
// 	char *strs[] = {"Hello", "World", "!"};
// 	char *sep = " ";
// 	char *result = ft_strjoin(0, strs, sep);
// 	printf("%s", result);
// 	free(result);
// }
