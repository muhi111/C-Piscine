/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_map_sub.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:19:28 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/26 15:19:51 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ten_exp(int digit)
{
	int	num;
	int	count;

	num = 1;
	count = 0;
	while (count < (digit - 1))
	{
		num = num * 10;
		count++;
	}
	return (num);
}

int	like_atoi(char *raw_map)
{
	int	i;
	int	digit;
	int	num;

	num = 0;
	i = 0;
	while (raw_map[i] != '\n')
	{
		i++;
	}
	digit = i - 3;
	i = 0;
	while (i < digit)
	{
		num += ten_exp(digit - i) * (raw_map[i] - '0');
		i++;
	}
	return (num);
}
