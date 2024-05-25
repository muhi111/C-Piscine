/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:58:58 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/18 21:07:34 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char str[] = "ABC";
//     char str1[] = "ABC";
//     char str2[] = "ABD";
//     char str3[] = "B";
//     char str4[] = "AAAA";

//     printf("strcmp(%s, %s) = %d\n", str, str1, strcmp(str, str1));
//     printf("ft_strcmp(%s, %s) = %d\n", str, str1, ft_strcmp(str, str1));
//     printf("strcmp(%s, %s) = %d\n", str, str2, strcmp(str, str2));
//     printf("ft_strcmp(%s, %s) = %d\n", str, str2, ft_strcmp(str, str2));
//     printf("strcmp(%s, %s) = %d\n", str, str3, strcmp(str, str3));
//     printf("ft_strcmp(%s, %s) = %d\n", str, str3, ft_strcmp(str, str3));
//     printf("strcmp(%s, %s) = %d\n", str, str4, strcmp(str, str4));
//     printf("ft_strcmp(%s, %s) = %d\n", str, str4, ft_strcmp(str, str4));

//     return (0);
// }