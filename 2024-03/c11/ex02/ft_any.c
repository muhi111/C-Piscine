/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:57:16 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/21 17:07:07 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
		{
			return (1);
		}
		i++;
	}
	return (0);
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
// 	char *tab[] = {"0123", "LAUSFIUA", "Asdf", 0};
// 	printf("%d\n", ft_any(tab, &is_lower));
// }