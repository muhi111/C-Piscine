/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:43:24 by ykusano           #+#    #+#             */
/*   Updated: 2022/10/14 18:08:41 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		i = 1;
		n = nb;
		while (i < power)
		{
			n *= nb;
			i++;
		}
		return (n);
	}
}


#include <stdio.h>

int	main(void)
{
	int	n;
	n = ft_iterative_power(5,2);
	printf("%d\n", n);
	return (0);
}
