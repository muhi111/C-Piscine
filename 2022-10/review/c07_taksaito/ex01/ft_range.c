/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 03:56:35 by taksaito          #+#    #+#             */
/*   Updated: 2022/10/22 10:38:51 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	i;

	if (min >= max)
		return (NULL);
	ret = malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < (max - min))
	{
		ret[i] = min + i;
		i++;
	}
	return (ret);
}

#include <stdio.h>

int	main(void)
{
	int *arr;
	arr = ft_range(0, 0);
	for (int i = 0; i < 1; i++)
	{
		printf("%d ", arr[i]);
	}
}