/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_and_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akamite <akamite@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:55:30 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/17 20:39:55 by akamite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**allocate_board(int y, int x)
{
	int	i;
	int	j;
	int	**board;

	board = (int **)malloc(sizeof(int *) * y);
	if (board == NULL)
		return (NULL);
	i = 0;
	while (i < y)
	{
		j = 0;
		board[i] = (int *)malloc(sizeof(int) * x);
		while (j < x)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	return (board);
}

void	free_board(int **board, int n)
{
	int	i;

	if (board == NULL)
		return ;
	i = 0;
	while (i < n)
	{
		if (board[i] != NULL)
			free(board[i]);
		i++;
	}
	free(board);
}
