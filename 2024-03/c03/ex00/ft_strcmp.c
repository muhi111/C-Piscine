/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:18:35 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/11 11:10:31 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main(void){
// 	char str1[] = "ABCDE";
// 	char str2[] = "ABCDEF";
// 	char str3[] = "ABCDF";
// 	char str4[] = "AB";
// 	char str5[] = "ABD";
// 	printf("%s vs %s\n", str1, str1);
// 	printf("expected output : %d\n", strcmp(str1, str1));
// 	printf("actual output   : %d\n\n", ft_strcmp(str1, str1));
// 	printf("%s vs %s\n", str1, str2);
// 	printf("expected output : %d\n", strcmp(str1, str2));
// 	printf("actual output   : %d\n\n", ft_strcmp(str1, str2));
// 	printf("%s vs %s\n", str1, str3);
// 	printf("expected output : %d\n", strcmp(str1, str3));
// 	printf("actual output   : %d\n\n", ft_strcmp(str1, str3));
// 	printf("%s vs %s\n", str1, str4);
// 	printf("expected output : %d\n", strcmp(str1, str4));
// 	printf("actual output   : %d\n\n", ft_strcmp(str1, str4));
// 	printf("%s vs %s\n", str1, str5);
// 	printf("expected output : %d\n", strcmp(str1, str5));
// 	printf("actual output   : %d\n\n", ft_strcmp(str1, str5));
// }