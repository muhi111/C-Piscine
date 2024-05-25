/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:09:27 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/18 12:44:00 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
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
// 	char *str2 = "He llo";
// 	char *str3 = "HELLO!\n";
// 	char *str4 = "\t";
// 	char *str5 = "";
// 	printf("%d, %d, %d, %d, %d", ft_str_is_printable(str1),
// 			ft_str_is_printable(str2), ft_str_is_printable(str3),
// 			ft_str_is_printable(str4), ft_str_is_printable(str5));
// 	return (0);
// }