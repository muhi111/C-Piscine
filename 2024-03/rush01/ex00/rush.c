/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akamite <akamite@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:28:09 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/17 21:50:07 by akamite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_top(int **look, int **board, int i, int j);
int		check_left(int **look, int **board, int i, int j);
int		check_down(int **look, int **board, int i, int j);
int		check_right(int **look, int **board, int i, int j);
int		check_duplicate(int size, int **board, int i, int j);
int		**allocate_board(int y, int x);
void	free_board(int **board, int n);
int		get_size(int **look);
void	print_error(void);

void	print_board(int size, int **board)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			c = board[i][j] + '0';
			write(1, &c, 1);
			if (j % size != size - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	check(int **look, int **board, int i, int j)
{
	if (check_duplicate(get_size(look), board, i, j))
	{
		if (check_top(look, board, i, j) && check_down(look, board, i, j))
		{
			if (check_left(look, board, i, j) && check_right(look, board, i, j))
				return (1);
		}
	}
	return (0);
}

int	rush_sub(int **look, int **board, int i, int j)
{
	int	k;

	if (i == get_size(look) && j == 0)
	{
		print_board(get_size(look), board);
		return (1);
	}
	k = 1;
	while (k <= get_size(look))
	{
		board[i][j] = k;
		if (check(look, board, i, j) && j == get_size(look) - 1)
		{
			if (rush_sub(look, board, i + 1, 0))
				return (1);
		}
		else if (check(look, board, i, j) && j != get_size(look) - 1)
		{
			if (rush_sub(look, board, i, j + 1))
				return (1);
		}
		board[i][j] = 0;
		k++;
	}
	return (0);
}

int	rush(int **look)
{
	int	**board;
	int	size;

	size = get_size(look);
	board = allocate_board(size, size);
	if (board == NULL)
	{
		print_error();
		return (1);
	}
	if (rush_sub(look, board, 0, 0) == 0)
	{
		print_error();
		free_board(board, size);
		return (1);
	}
	else
	{
		free_board(board, size);
		return (0);
	}
	return (0);
}
