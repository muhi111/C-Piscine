/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 09:07:07 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/13 02:48:56 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dest);
	if (len >= size)
	{
		return (ft_strlen(src) + size);
	}
	while (i < size - len - 1 && src[i] != '\0')
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (len + ft_strlen(src));
}

// #include <bsd/string.h>
// #include <stdio.h>
// int main(void){
//     char dest[9] = "ABCDE";
//     char src[] = "123";
//     unsigned int n;

//     printf("dest : %s\n", dest);
//     printf("src  : %s\n\n", src);
//     n = strlcat(dest, src, 7);
//     printf("n = 7 expected output : %3s, return value %u\n", dest, n);
//     strncpy(dest, "ABCDE", 6);
//     n = ft_strlcat(dest, src, 7);
//     printf("n = 7 result          : %3s, return value %u\n\n", dest, n);

//     strncpy(dest, "ABCDE", 6);
//     n = strlcat(dest, src,9);
//     printf("n = 9 expected output : %3s, return value %u\n", dest, n);
//     strncpy(dest, "ABCDE", 6);
//     n = ft_strlcat(dest, src, 9);
//     printf("n = 9 result          : %3s, return value %u\n\n", dest, n);

//     strncpy(dest, "ABCDE", 6);
//     n = strlcat(dest, src, 0);
//     printf("n = 0 expected output : %3s, return value %u\n", dest, n);
// 	strncpy(dest, "ABCDE", 6);
//     n = ft_strlcat(dest, src, 0);
//     printf("n = 0 result          : %3s, return value %u\n", dest, n);
// }