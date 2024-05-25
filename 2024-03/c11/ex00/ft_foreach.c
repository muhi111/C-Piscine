/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:32:00 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/21 15:44:11 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// #include <unistd.h>
// void print_tab(int i){
// 	char c = i + '0';
// 	write(1, &c, 1);
// 	write(1, " ", 1);
// }

// int main(void){
// 	int tab[] = {1,2,3,4,5,6,7,8,9};
// 	ft_foreach(tab, sizeof(tab)/sizeof(int), &print_tab);
// }