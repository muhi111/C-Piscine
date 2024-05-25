/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 08:56:49 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/07 15:49:52 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
			continue ;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
			continue ;
		}
		return (0);
	}
	return (1);
}

// #include <stdio.h>
// int main(void){
// 	char str1[] = "HelloWorld";
// 	char str2[] = "Hello World!";
// 	char str3[] = "";
// 	printf("\"%s\"   : %d\n", str1, ft_str_is_alpha(str1));
// 	printf("\"%s\" : %d\n", str2, ft_str_is_alpha(str2));
// 	printf("\"%s\"             : %d\n", str3, ft_str_is_alpha(str3));
// }