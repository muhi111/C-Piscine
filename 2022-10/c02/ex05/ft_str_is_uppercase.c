/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:06:25 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/17 19:08:47 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char *str1 = "HELLO";
// 	char *str2 = "Hello";
// 	char *str3 = "HELLO!";
// 	char *str4 = "HELLO1";
// 	char *str5 = "";
// 	printf("%d, %d, %d, %d, %d", ft_str_is_uppercase(str1),
// 			ft_str_is_uppercase(str2),
// 			ft_str_is_uppercase(str3), ft_str_is_uppercase(str4),
// 			ft_str_is_uppercase(str5));
// 	return (0);
// }