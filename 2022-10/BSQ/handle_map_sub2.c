/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_map_sub2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:40:24 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/26 22:04:01 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	size_input(char *raw_map, int size[2])
{
	int	i;
	int	start;
	int	count;

	size[0] = like_atoi(raw_map);
	if (size[0] == 0)
		return (0);
	i = 0;
	while (raw_map[i] != '\n')
		i++;
	start = i;
	count = 0;
	i = start;
	while (raw_map[++i] != '\n')
		count++;
	size[1] = count;
	return (start);
}

int	gen_map(char *raw_map, char string[4], int size[2], char **board)
{
	int	i;
	int	start;
	int	x;
	int	y;

	start = size_input(raw_map, size);
	i = start + 1;
	x = 0;
	y = 0;
	if (raw_map[i] == '\n' && raw_map[i] == '\0')
		return (0);
	while (x < size[0])
	{
		if (raw_map[i] == string[0] || raw_map[i] == string[1])
			board[x][y] = raw_map[i];
		else if (!(y == size[1] && raw_map[i] == '\n'))
			return (0);
		i++;
		x = (i - start - 1) / (size[1] + 1);
		y = (i - start - 1) % (size[1] + 1);
	}
	return (1);
}
