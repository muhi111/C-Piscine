/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:10:22 by ykusano           #+#    #+#             */
/*   Updated: 2022/10/14 18:06:50 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	n;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		n = nb * ft_recursive_factorial(nb - 1);
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
		printf("%d  :   %d\n", i, ft_recursive_factorial(i));
		i++;
	}
	return (0);
}