/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:21:55 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/07 15:47:22 by youchiya         ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (ft_strlen(src) < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int main(void){
//     char dest[] = "ABCDE";
//     char src[] = "123";

//     printf("dest : %s\n", dest);
//     printf("src  : %s\n", src);
//     printf("n = 2 expected output : %s\n", strncpy(dest, src, 2));
//     strncpy(dest, "ABCDE", 6);
//     printf("n = 2 result          : %s\n", ft_strncpy(dest, src, 2));

//     strncpy(dest, "ABCDE", 6);
//     printf("n = 3 expected output : %s\n", strncpy(dest, src, 3));
//     strncpy(dest, "ABCDE", 6);
//     printf("n = 3 result          : %s\n", ft_strncpy(dest, src, 3));

//     strncpy(dest, "ABCDE", 6);
//     printf("n = 4 expected output : %s\n", strncpy(dest, src, 4));
//     strncpy(dest, "ABCDE", 6);
//     printf("n = 4 result          : %s\n", ft_strncpy(dest, src, 4));
// }