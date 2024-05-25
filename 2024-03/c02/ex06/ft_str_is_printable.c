/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:44:43 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/07 15:54:06 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
// 	char str1[] = "Hello World!";
// 	char str2[] = "\t";
// 	char str3[] = "";
// 	printf("\"%s\": %d\n", str1, ft_str_is_printable(str1));
// 	printf("\"\\t\"          : %d\n", ft_str_is_printable(str2));
// 	printf("\"\"            : %d\n", ft_str_is_printable(str3));
// }