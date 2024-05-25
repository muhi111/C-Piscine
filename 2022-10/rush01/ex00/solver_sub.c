/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_sub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:13:03 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/16 14:28:23 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		solver(int num, int board[4][4], int view[4][4]);
int		compare(int board[4][4], int view[4][4]);
void	write_result(int array[][4], int size);
int		check(int i, int j, int num, int board[4][4]);

int	solver_sub1(int num, int board[4][4], int view[4][4])
{
	if (compare(board, view) == 0)
	{
		write_result(board, 4);
		return (0);
	}
	else
	{
		num = 15;
		solver(num, board, view);
	}
	return (0);
}

int	solver_sub2(int num, int board[4][4], int view[4][4])
{
	int	x;
	int	y;
	int	n;

	x = num / 4;
	y = num % 4;
	if (board[x][y] != 4)
	{
		n = board[x][y];
		while (n <= 3)
		{
			n++;
			if (check(x, y, n, board) == 0)
			{
				board[x][y] = n;
				num++;
				solver(num, board, view);
				return (0);
			}
		}
	}
	board[x][y] = 0;
	num--;
	solver(num, board, view);
	return (0);
}
