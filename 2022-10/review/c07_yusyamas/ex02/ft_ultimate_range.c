/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:02:27 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/21 08:56:58 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_set_int(int *ft, int min, int max)
{
	int	i;

	i = min;
	while (i < max)
	{
		*ft = i;
		ft += 1;
		i += 1;
	}
	return (ft);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	**ft;

	ft = malloc(sizeof(int *));
	ft = range;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	ft[0] = (int *)malloc(sizeof(int) * size);
	if (ft[0] == NULL)
	{
		range = NULL;
		return (-1);
	}
	ft_set_int(ft[0], min, max);
	return (size);
}
