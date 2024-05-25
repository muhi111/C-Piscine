/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:10:44 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/06 15:28:57 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(tab + j, tab + j + 1);
			}
			j++;
		}
		i++;
	}
}

// #include <stdio.h>
// int main(void){
// 	int table[5] = {3,2,1,9,5};
// 	printf("before : %d, %d, %d, %d, %d\n", table[0], table[1], 
// 	table[2], table[3], table[4]);
// 	ft_sort_int_tab(table, 5);
// 	printf("after  : %d, %d, %d, %d, %d\n", table[0], table[1], 
// 	table[2], table[3], table[4]);
// }