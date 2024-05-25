/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:06:32 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/24 21:37:38 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	min_check(int x, int y, int z)
{
	if (x <= y && x <= z)
		return (x);
	else if (y <= x && y <= z)
		return (y);
	else
		return (z);
}

int	max_check(int x, int y)
{
	if (x <= y)
		return (y);
	else
		return (x);
}
