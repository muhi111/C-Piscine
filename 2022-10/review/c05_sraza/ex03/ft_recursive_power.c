/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:44:18 by sraza             #+#    #+#             */
/*   Updated: 2022/10/20 21:52:08 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb != 0)
	{
		if (power == 0)
		{
			return (power += 1);
		}
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else if (nb == 0 && power == 0)
		return (1);
	return (0);
}

#include <stdio.h>
int	main(void)
{
	int	nb;
	int power;
	nb = -1296;
	power = 1;
	printf("%d \n",ft_recursive_power(nb, power));
	printf("%d \n",ft_recursive_power(5, -1));
	printf("%d \n",ft_recursive_power(-1, 10));

	return (0);
}
