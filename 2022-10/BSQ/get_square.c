/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:18:29 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/26 16:49:52 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ternaries(char x, char y);
int	**gen_edge(char **board, int size[2], char string[4], int *max_width);

int	**get_square(char **board, int size[2], char string[4], int *max_width)
{
	int	**square_num;
	int	i;
	int	j;

	square_num = gen_edge(board, size, string, max_width);
	i = 0;
	while (++i < size[0])
	{
		j = 0;
		while (++j < size[1])
		{
			if (board[i][j] == string[1])
				square_num[i][j] = 0;
			else
				square_num[i][j] = min_check(square_num[i - 1][j - 1],
						square_num[i][j - 1], square_num[i - 1][j]) + 1;
			*max_width = max_check(square_num[i][j], *max_width);
		}
	}
	return (square_num);
}
