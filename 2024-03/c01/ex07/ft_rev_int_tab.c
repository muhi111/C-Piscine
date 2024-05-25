/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:48:26 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/06 19:52:59 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size + 1) / 2)
	{
		ft_swap(tab + i, tab + size - i - 1);
		i++;
	}
}

// #include <stdio.h>
// int main(void){
// 	int table_1[5] = {0,1,2,3,4};
// 	int table_2[4] = {0,1,2,3};
// 	printf("before : %d, %d, %d, %d, %d\n", table_1[0],
// 	table_1[1], table_1[2], table_1[3], table_1[4]);
// 	ft_rev_int_tab(table_1, 5);
// 	printf("after  : %d, %d, %d, %d, %d\n", table_1[0], 
// 	table_1[1], table_1[2], table_1[3], table_1[4]);
// 	printf("\n");
// 	printf("before : %d, %d, %d, %d\n", table_2[0], 
// 	table_2[1], table_2[2], table_2[3]);
// 	ft_rev_int_tab(table_2, 4);
// 	printf("after  : %d, %d, %d, %d\n", table_2[0], 
// 	table_2[1], table_2[2], table_2[3]);
// }