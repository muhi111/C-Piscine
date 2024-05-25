/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:14:37 by sraza             #+#    #+#             */
/*   Updated: 2022/10/20 21:48:58 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	nb = nb * ft_recursive_factorial (nb - 1);
	return (nb);
}

#include <stdio.h>
int	main(void)
{
	int	nb;
	nb = 1;
	printf("%d \n",ft_recursive_factorial(nb));
}
