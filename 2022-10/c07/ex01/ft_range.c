/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:13:32 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/22 20:24:49 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int	i;

	if (min >= max)
		return (NULL);
	num = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < (max - min))
	{
		num[i] = min + i;
		i++;
	}
	return (num);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int min = -5;
// 	int max = 10;
// 	int i;
// 	int *a;

// 	a = ft_range(min, max);
// 	for (i = 0; i < max - min; i++)
// 		printf("%d ", a[i]);
// 	free(a);
// }