/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:47:36 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/17 18:59:58 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
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
// 	char *str1 = "Hello";
// 	char *str2 = "Hello World";
// 	char *str3 = "Hello World!";
// 	char *str4 = "Hello11";
// 	char *str5 = "";
// 	printf("%d, %d, %d, %d, %d", ft_str_is_alpha(str1), ft_str_is_alpha(str2),
// 			ft_str_is_alpha(str3), ft_str_is_alpha(str4),
// 			ft_str_is_alpha(str5));
// 	return (0);
// }