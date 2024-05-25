/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:34:04 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/07 15:51:52 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
		return (0);
	}
	return (1);
}

// #include <stdio.h>
// int main(void){
// 	char str1[] = "helloworld";
// 	char str2[] = "HelloWorld";
// 	char str3[] = "";
// 	printf("\"%s\": %d\n", str1,ft_str_is_lowercase(str1));
// 	printf("\"%s\": %d\n", str2, ft_str_is_lowercase(str2));
// 	printf("\"%s\"          : %d\n", str3, ft_str_is_lowercase(str3));
// }