/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakahar <ysakahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:30:37 by ysakahar          #+#    #+#             */
/*   Updated: 2022/10/17 12:30:37 by ysakahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	scope;
	int	i;
	int	*ptr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	scope = max - min;
	ptr = malloc(scope * sizeof(int));
	if (ptr == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = ptr;
	i = 0;
	while (i < scope)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
