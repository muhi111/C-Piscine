/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Shion Ichikawa <shion1305@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:24:10 by Shion Ichikawa    #+#    #+#             */
/*   Updated: 2022/10/18 14:47:32 by Shion Ichikawa   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*result;
	int					i;
	int					index;

	result = malloc(sizeof(t_stock_str) * ac);
	i = -1;
	while (++i < ac)
	{
		result[i].str = av[i];
		index = 0;
		while (av[i][index++] != '\0')
			;
		result[i].copy = malloc(sizeof(char) * (index + 1));
		index = -1;
		while (av[i][++index] != '\0')
			result[i].copy[index] = av[i][index];
		result[i].copy[index] = '\0';
		result[i].size = index;
	}
	return (result);
}
