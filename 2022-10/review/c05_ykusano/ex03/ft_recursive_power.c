/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:12:49 by ykusano           #+#    #+#             */
/*   Updated: 2022/10/14 18:10:11 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		n = nb;
		n *= ft_recursive_power(n, power - 1);
		return (n);
	}
}


#include <stdio.h>

int	main(void)
{
	int	n;
	n = ft_recursive_power(3,4);
	printf("%d\n", n);
	return (0);
}
