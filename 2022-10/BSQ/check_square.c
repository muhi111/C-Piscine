/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:20:10 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/26 12:45:32 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	check_square(int **square_num, int *max_width, int size[2], int num[2])
{
	int	i;
	int	j;

	i = -1;
	while (++i < size[0])
	{
		j = -1;
		while (++j < size[1])
		{
			if (square_num[i][j] == *max_width)
			{
				num[0] = i;
				num[1] = j;
				return ;
			}
		}
	}
}
