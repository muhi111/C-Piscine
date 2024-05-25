/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:31:18 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/07 15:50:58 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
// 	char str1[] = "19207493";
// 	char str2[] = "23947T347A";
// 	char str3[] = "";
// 	printf("\"%s\"  : %d\n", str1,ft_str_is_numeric(str1));
// 	printf("\"%s\": %d\n", str2, ft_str_is_numeric(str2));
// 	printf("\"%s\"          : %d\n", str3, ft_str_is_numeric(str3));
// }