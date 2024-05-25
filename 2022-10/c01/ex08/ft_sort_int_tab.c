/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:13:11 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/14 04:33:12 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	sort_count;
	int	count;
	int	a;

	sort_count = 1;
	while (sort_count != 0)
	{
		sort_count = 0;
		count = 0;
		while (count <= (size -2))
		{
			if (tab[count] > tab[count + 1])
			{
				a = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = a;
				sort_count ++;
			}
			count ++;
		}
	}
}
/*
#include <stdio.h>
int main()
{
    int tab[7] = {7, 6, 3, 4, 2, 5, 5};
    int size = 7;

    ft_sort_int_tab(tab, size);
    printf("%d ,%d, %d ,", tab[0], tab[1], tab[2]);
	printf("%d ,%d, %d, %d",tab[3], tab[4], tab[5], tab[6]);
    return  0;
    //出力結果　2,3,4,5,5,6,7
}*/
