/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:07:29 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/21 17:12:39 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

// int is_lower(char *str){
// 	for (int i = 0;str[i] != '\0';i++){
// 		if (str[i] < 'a' || str[i] > 'z'){
// 			return (0);
// 		}
// 	}
// 	return (1);
// }

// #include <stdio.h>
// int main(void){
// 	char *tab[] = {"0123", "LAUSFIUA", "asdf"};
// 	printf("%d\n", ft_count_if(tab, sizeof(tab)/sizeof(char *), &is_lower));
// }