/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:11:07 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/08 22:55:19 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1 && i < ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// #include <bsd/string.h>
// #include <stdio.h>
// int main(void){
//     char dest[] = "ABCDE";
//     char src[] = "123";
//     unsigned int n;

//     printf("dest : %s\n", dest);
//     printf("src  : %s\n\n", src);
//     n = strlcpy(dest, src, 2);
//     printf("n = 2 expected output : %3s, return value %u\n", dest, n);
//     strncpy(dest, "ABCDE", 6);
//     n = ft_strlcpy(dest, src, 2);
//     printf("n = 2 result          : %3s, return value %u\n\n", dest, n);

//     strncpy(dest, "ABCDE", 6);
//     n = strlcpy(dest, src,0);
//     printf("n = 0 expected output : %3s, return value %u\n", dest, n);
//     strncpy(dest, "ABCDE", 6);
//     n = ft_strlcpy(dest, src, 0);
//     printf("n = 0 result          : %3s, return value %u\n\n", dest, n);

//     strncpy(dest, "ABCDE", 6);
//     n = strlcpy(dest, src, 1000);
//     printf("n = 1000 expected output : %3s, return value %u\n", dest, n);
// 	strncpy(dest, "ABCDE", 6);
//     n = ft_strlcpy(dest, src, 1000);
//     printf("n = 1000 result          : %3s, return value %u\n", dest, n);
// }