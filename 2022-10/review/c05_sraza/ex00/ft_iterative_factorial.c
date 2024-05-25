/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:38:06 by sraza             #+#    #+#             */
/*   Updated: 2022/10/20 21:48:05 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	ans;
	int	i;

	ans = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		ans = ans * i;
		i++;
	}
	return (ans);
}

#include <stdio.h>
int	main(void)
{
	int	nb;
	nb = -1;
	printf("%d \n",ft_iterative_factorial(nb));
}
