/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akamite <akamite@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:43:00 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/17 17:11:56 by akamite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TOP 0
#define DOWN 1
#define LEFT 2
#define RIGTHT 3

int	get_size(int **look);

int	check_top(int **look, int **board, int i, int j)
{
	int	max;
	int	count;
	int	k;
	int	size;

	size = get_size(look);
	max = 0;
	count = 0;
	k = 0;
	while (k < size)
	{
		if (board[k][j] > max)
		{
			max = board[k][j];
			count++;
		}
		k++;
	}
	if (i != size - 1 && look[TOP][j] < count)
		return (0);
	else if (i == size - 1 && look[TOP][j] != count)
		return (0);
	return (1);
}

int	check_left(int **look, int **board, int i, int j)
{
	int	max;
	int	count;
	int	k;
	int	size;

	size = get_size(look);
	max = 0;
	count = 0;
	k = 0;
	while (k < size)
	{
		if (board[i][k] > max)
		{
			max = board[i][k];
			count++;
		}
		k++;
	}
	if (j != size - 1 && look[LEFT][i] < count)
		return (0);
	else if (j == size - 1 && look[LEFT][i] != count)
		return (0);
	return (1);
}

int	check_down(int **look, int **board, int i, int j)
{
	int	max;
	int	count;
	int	k;
	int	size;

	size = get_size(look);
	max = 0;
	count = 0;
	k = size - 1;
	if (i == size - 1)
	{
		while (k >= 0)
		{
			if (board[k][j] > max)
			{
				max = board[k][j];
				count++;
			}
			k--;
		}
		if (look[DOWN][j] != count)
			return (0);
	}
	return (1);
}

int	check_right(int **look, int **board, int i, int j)
{
	int	max;
	int	count;
	int	k;
	int	size;

	size = get_size(look);
	max = 0;
	count = 0;
	k = size - 1;
	if (j == size - 1)
	{
		while (k >= 0)
		{
			if (board[i][k] > max)
			{
				max = board[i][k];
				count++;
			}
			k--;
		}
		if (i == size - 1 && look[RIGTHT][i] != count)
			return (0);
	}
	return (1);
}

int	check_duplicate(int size, int **board, int i, int j)
{
	int	k;

	k = 0;
	while (k < size)
	{
		if (board[k][j] == board[i][j] && k != i)
			return (0);
		if (board[i][k] == board[i][j] && k != j)
			return (0);
		k++;
	}
	return (1);
}
