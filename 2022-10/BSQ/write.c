/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:46:47 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/26 19:11:43 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	write_result(char **array, int size[2])
{
	int		i;
	int		k;
	char	c;

	i = 0;
	k = 0;
	while (i < size[0])
	{
		k = 0;
		while (k < size[1])
		{
			c = array[i][k];
			write(1, &c, 1);
			k++;
		}
		write(2, "\n", 1);
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		write(1, (str + count), 1);
		count ++;
	}
}
