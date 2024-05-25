/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:00:54 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/17 19:03:28 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
// 	char *str1 = "1111";
// 	char *str2 = "11 11";
// 	char *str3 = "1111!";
// 	char *str4 = "1h11";
// 	char *str5 = "";
// 	printf("%d, %d, %d, %d, %d", ft_str_is_numeric(str1),
			// ft_str_is_numeric(str2),
// 			ft_str_is_numeric(str3), ft_str_is_numeric(str4),
// 			ft_str_is_numeric(str5));
// 	return (0);
// }