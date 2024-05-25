/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:36:47 by yutsasak          #+#    #+#             */
/*   Updated: 2024/03/27 06:43:01 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_min(int a, int b, int c)
{
	int	min;

	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	return (min);
}

void	checker(int i, int j, int **dp, t_mapinf *map)
{
	if (map->matrix[i][j] == map->obstacle)
		dp[i][j] = 0;
	else if (map->matrix[i][j] == map->empty)
	{
		if (i == 0 || j == 0)
			dp[i][j] = 1;
		else
			dp[i][j] = get_min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1])
				+ 1;
	}
	if (dp[i][j] > map->max_square_size)
	{
		map->max_square_size = dp[i][j];
		map->max_square_row = i;
		map->max_square_col = j;
	}
}

void	max_square(t_mapinf *map)
{
	int	**dp;
	int	i;
	int	j;

	map->max_square_size = 0;
	i = -1;
	dp = (int **)malloc(sizeof(int *) * map->rows);
	while (++i < map->rows)
	{
		dp[i] = (int *)malloc(sizeof(int) * map->columns);
		j = -1;
		while (++j < map->columns)
			checker(i, j, dp, map);
	}
	i = -1;
	while (++i < map->rows)
		free(dp[i]);
	free(dp);
	map->max_square_row -= (map->max_square_size - 1);
	map->max_square_col -= (map->max_square_size - 1);
}

void	print_map(t_mapinf *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->rows)
	{
		j = 0;
		while (j < map->columns)
		{
			if (i >= map->max_square_row && i < map->max_square_row
				+ map->max_square_size && j >= map->max_square_col
				&& j < map->max_square_col + map->max_square_size)
				write(1, &(map->full), 1);
			else if (map->matrix[i][j] == map->empty)
				write(1, &(map->empty), 1);
			else if (map->matrix[i][j] == map->obstacle)
				write(1, &(map->obstacle), 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
