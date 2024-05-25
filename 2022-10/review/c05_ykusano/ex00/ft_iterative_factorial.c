/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:08:47 by ykusano           #+#    #+#             */
/*   Updated: 2022/10/14 18:02:20 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;
	int	x;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		i = 1;
		n = nb;
		x = nb;
		while (i < nb)
		{
			n *= x - i;
			i++;
		}
		return (n);
	}
}

#include <stdio.h>

int	main(void)
{
	int	i;

	i = -2;
	while (i < 13)
	{
		printf("%d  :   %d\n", i, ft_iterative_factorial(i));
		i++;
	}
	return (0);
}