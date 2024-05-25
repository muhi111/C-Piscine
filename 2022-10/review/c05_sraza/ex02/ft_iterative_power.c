/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:44:22 by sraza             #+#    #+#             */
/*   Updated: 2022/10/20 21:50:48 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = nb;
	if (power < 0)
		return (0);
	else if (nb != 0)
	{
		while (power > 1)
		{
			nb = nb * ans;
			power--;
		}
		return (nb);
	}
	else if (nb == 0 && power == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include <stdio.h>
int	main(void)
{
	int	nb;
	int power;
	nb = 5;
	power = -1;
	printf("%d \n",ft_iterative_power(nb, power));
	return (0);
}
