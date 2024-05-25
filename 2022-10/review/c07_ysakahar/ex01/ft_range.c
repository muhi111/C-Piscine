/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakahar <ysakahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 00:22:55 by ysakahar          #+#    #+#             */
/*   Updated: 2022/10/17 00:22:55 by ysakahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*ptr;
	int	i;

	if (min >= max)
		return (NULL);
	range = max - min;
	ptr = malloc(range * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < range)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
