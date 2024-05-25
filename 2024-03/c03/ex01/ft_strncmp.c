/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:59:52 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/11 11:11:43 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void){
// 	char str1[] = "ABCDE";
// 	char str4[] = "AB";
// 	char str5[] = "ABD";
// 	printf("%s vs %s\n", str1, str4);
// 	printf("n = 2 expected output : %d\n", strncmp(str1, str4, 2));
// 	printf("n = 2 actual output   : %d\n\n", ft_strncmp(str1, str4, 2));
// 	printf("n = 3 expected output : %d\n", strncmp(str1, str4, 3));
// 	printf("n = 3 actual output   : %d\n\n", ft_strncmp(str1, str4, 3));
// 	printf("n = 6 expected output : %d\n", strncmp(str1, str4, 6));
// 	printf("n = 6 actual output   : %d\n\n\n", ft_strncmp(str1, str4, 6));
// 	printf("%s vs %s\n", str1, str5);
// 	printf("n = 2 expected output : %d\n", strncmp(str1, str5, 2));
// 	printf("n = 2 actual output   : %d\n\n", ft_strncmp(str1, str5, 2));
// 	printf("n = 3 expected output : %d\n", strncmp(str1, str5, 3));
// 	printf("n = 3 actual output   : %d\n\n", ft_strncmp(str1, str5, 3));
// }