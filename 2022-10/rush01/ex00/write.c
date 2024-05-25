/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:53:46 by rtakashi          #+#    #+#             */
/*   Updated: 2022/10/16 16:39:37 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_result(int array[][4], int size)
{
	int		i;
	int		k;
	char	c;

	i = 0;
	k = 0;
	while (i < size)
	{
		k = 0;
		while (k < 4)
		{
			c = array[i][k] + '0';
			write(1, &c, 1);
			if (k != 3)
				write(1, " ", 1);
			k++;
		}
		write(1, "\n", 1);
		i++;
	}
}
