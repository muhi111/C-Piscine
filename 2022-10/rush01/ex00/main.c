/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:08:18 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/16 16:23:45 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	solver(int num, int board[4][4], int view[4][4]);
int	input(int argc, char *argv[], int view[4][4]);

int	main(int argc, char *argv[])
{
	int	board[4][4];
	int	view[4][4];
	int	count1;
	int	count2;
	int	num;

	num = 0;
	count1 = 0;
	while (count1 < 4)
	{
		count2 = 0;
		while (count2 < 4)
		{
			board[count1][count2] = 0;
			count2++;
		}
		count1++;
	}
	if (input(argc, argv, view) == 0)
		solver(num, board, view);
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
