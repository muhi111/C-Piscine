/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:53:33 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/13 13:30:23 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	count;

	count = 0;
	while (count < (size / 2))
	{
		a = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = a;
		count ++;
	}
}
/*
#include <stdio.h>
int main()
{
    int tab[6] = {-1, 2, 3, 4, 5, 6};
    int size = 6;

    ft_rev_int_tab(tab, size);
    printf("%d,%d,%d,%d,%d,%d",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
    return 0 ;
	// 出力結果　6,5,4,3,2,-1
}*/
