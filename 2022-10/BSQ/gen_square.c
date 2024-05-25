/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:17:21 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/26 13:21:21 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**gen_square(char **board, int size[2], char string[4])
{
	int	a;
	int	*max_width;
	int	i;
	int	j;
	int	num[2];

	num[0] = 0;
	num[1] = 0;
	a = 0;
	max_width = &a;
	check_square(get_square(board, size, string, max_width), max_width, size,
		num);
	i = num[0] - *max_width + 1;
	while (i <= num[0])
	{
		j = num[1] - *max_width + 1;
		while (j <= num[1])
		{
			board[i][j] = string[2];
			j++;
		}
		i++;
	}
	return (board);
}
