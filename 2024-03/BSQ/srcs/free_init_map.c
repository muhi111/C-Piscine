/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 05:35:52 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/27 07:11:55 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_map(t_mapinf *map)
{
	int	i;

	i = 0;
	while (i < map->rows)
	{
		free(map->matrix[i]);
		map->matrix[i] = NULL;
		i++;
	}
	free(map->matrix);
}

void	init_map(t_mapinf *map)
{
	map->columns = 0;
	map->rows = 0;
	map->empty = '\0';
	map->obstacle = '\0';
	map->full = '\0';
	map->matrix = NULL;
	map->max_square_col = 0;
	map->max_square_row = 0;
	map->max_square_size = 0;
}
