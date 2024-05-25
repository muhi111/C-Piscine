/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:59:04 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/18 21:07:25 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[] = "ABC";
// 	printf("ABC: ABD   = %d\n", ft_strncmp(str, "ABD", 2));
// 	printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABC", 2));
// 	printf("ABC: AAA   = %d\n", ft_strncmp(str, "AAA", 2));
// 	printf("ABC: ABCD  = %d\n", ft_strncmp(str, "ABCD", 2));
// 	printf("ABC: AB    = %d\n", ft_strncmp(str, "AB", 2));
// 	printf("ABC: B     = %d\n", ft_strncmp(str, "B", 2));
// 	printf("ABC: A     = %d\n", ft_strncmp(str, "A", 2));
// 	return (0);
// }