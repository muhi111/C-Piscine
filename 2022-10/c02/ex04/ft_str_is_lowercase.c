/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:04:08 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/17 19:08:09 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
// 	char *str1 = "hello";
// 	char *str2 = "Hello";
// 	char *str3 = "hello!";
// 	char *str4 = "hello1";
// 	char *str5 = "";
// 	printf("%d, %d, %d, %d, %d", ft_str_is_lowercase(str1),
// 			ft_str_is_lowercase(str2),
// 			ft_str_is_lowercase(str3), ft_str_is_lowercase(str4),
// 			ft_str_is_lowercase(str5));
// 	return (0);
// }