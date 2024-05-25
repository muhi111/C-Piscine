/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtachiba <rtachiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:53:22 by rtachiba          #+#    #+#             */
/*   Updated: 2022/10/21 17:00:06 by rtachiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// int	ft_plus_one(int con)
// {
// 	con = con + 1;
// 	return (con);
// }

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ans;
	int	i;

	ans = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		ans[i] = f(tab[i]);
		i++;
	}
	return (ans);
}

// int	main(void)
// {
// 	int	tab[5];
// 	int	i;
// 	int	*ans;

// 	i = 0;
// 	while (i < 5)
// 	{
// 		tab[i] = i;
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ans = ft_map(tab, 5, &ft_plus_one);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d", ans[i]);
// 		i++;
// 	}
// 	return (0);
// }

// mallocで新しいメモリを獲得
// 配列の中身それぞれをfに渡す
// 戻ってきたものを獲得したメモリに入れていく
// その配列のポインタを戻り値にする
