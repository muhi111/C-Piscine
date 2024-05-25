/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtachiba <rtachiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:53:30 by rtachiba          #+#    #+#             */
/*   Updated: 2022/10/21 20:36:38 by rtachiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_main_sort(int s1, int s2)
{
	return (s1 - s2);
}

int	ft_up(int *tab, int length)
{
	int	i;
	int	ans;

	while (i < length - 1)
	{
		ans = ft_main_sort(tab[i], tab[i + 1]);
		if (ans > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_down(int *tab, int length)
{
	int	i;
	int	ans;

	while (i < length - 1)
	{
		ans = ft_main_sort(tab[i], tab[i + 1]);
		if (ans < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ans;

	i = 0;
	while (i < length - 1)
	{
		ans = f(tab[i], tab[i + 1]);
		if (ans < 0)
		{
			ans = ft_up(tab, length);
			return (ans);
		}
		if (ans > 0)
		{
			ans = ft_down(tab, length);
			return (ans);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	arr[3];
// 	int	length;

// 	arr[0] = 1;
// 	arr[1] = 2;
// 	arr[2] = 3;
// 	length = 3;
// 	printf("result = %d\n", ft_is_sort(arr, length, &ft_main_sort));
// 	return (0);
// }

// f関数はバブルソートの要領でチェックしているらしい
// てことは単純に、マイナスの値が返ってこなければ、０を返せばいい（降順の場合）
// 昇順の場合も考えて、アルゴリズムを作った方がいいのかなあ
