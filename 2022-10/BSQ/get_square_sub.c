/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_square_sub.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:48:18 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/26 16:49:22 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ternaries(char x, char y)
{
	if (x == y)
		return (0);
	else
		return (1);
}

int	**gen_edge(char **board, int size[2], char string[4], int *max_width)
{
	int	i;
	int	**square_num;

	square_num = (int **)malloc(sizeof(int *) * size[0]);
	i = -1;
	while (++i < size[0])
		square_num[i] = malloc(sizeof(int) * size[1]);
	i = -1;
	while (++i < size[1])
	{
		square_num[0][i] = ternaries(board[0][i], string[1]);
		*max_width = max_check(square_num[0][i], *max_width);
	}
	i = -1;
	while (++i < size[0])
	{
		square_num[i][0] = ternaries(board[i][0], string[1]);
		*max_width = max_check(square_num[i][0], *max_width);
	}
	return (square_num);
}
