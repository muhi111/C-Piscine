/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:35:54 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/07 15:52:37 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
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
// 	char str1[] = "HELLOWORLD";
// 	char str2[] = "HelloWorld";
// 	char str3[] = "";
// 	printf("\"%s\": %d\n", str1, ft_str_is_uppercase(str1));
// 	printf("\"%s\": %d\n", str2, ft_str_is_uppercase(str2));
// 	printf("\"%s\"          : %d\n", str3, ft_str_is_uppercase(str3));
// }