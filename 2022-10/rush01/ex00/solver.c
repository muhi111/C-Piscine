/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:27:56 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/16 16:37:51 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check(int i, int j, int num, int board[4][4]);
int		compare(int board[4][4], int view[4][4]);
void	write_result(int array[][4], int size);
int		solver_sub1(int num, int board[4][4], int view[4][4]);
int		solver_sub2(int num, int board[4][4], int view[4][4]);

int	solver(int num, int board[4][4], int view[4][4])
{
	if (num == 16)
	{
		solver_sub1(num, board, view);
	}
	else if (num == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else if (num >= 0)
	{
		solver_sub2(num, board, view);
	}
	num = -1;
	return (1);
}
