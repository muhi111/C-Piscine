/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:11:25 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/15 03:37:22 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_board(int queens[10])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = queens[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	set_board(int board[10][10], int i, int j, int check)
{
	int	k;
	int	l;

	k = 0;
	while (k < 10)
	{
		l = 0;
		while (l < 10)
		{
			if (l == j || k - i == l - j || k + l == i + j)
			{
				board[k][l] += check;
			}
			l++;
		}
		k++;
	}
}

void	set_queens(int queens[10], int board[10][10], int i, int *count)
{
	int	j;

	if (i == 10)
	{
		print_board(queens);
		*count = *count + 1;
		return ;
	}
	j = 0;
	while (j < 10)
	{
		if (board[i][j] == 0)
		{
			queens[i] = j;
			set_board(board, i, j, 1);
			set_queens(queens, board, i + 1, count);
			set_board(board, i, j, -1);
		}
		j++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	queens[10];
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (i < 10)
	{
		j = 0;
		queens[0] = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	set_queens(queens, board, 0, &count);
	return (count);
}

// #include <stdio.h>
// int main(void){
// 	printf("%d\n", ft_ten_queens_puzzle());
// }