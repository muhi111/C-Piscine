/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:41:38 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/22 20:24:39 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int mn = -10;
// 	int mx = 20;

// 	int *arr;
// 	int ret = ft_ultimate_range(&arr, mn, mx);

// 	printf("return (: %d\n", ret);

// 	if (ret > 0)
// 	{
// 		for (int i = 0; i < mx - mn; ++i)
// 			printf("%d ", arr[i]);
// 		printf("\n");
// 	}

// 	free(arr);

// 	return (0);
// }