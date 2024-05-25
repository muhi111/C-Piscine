/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:25:59 by sraza             #+#    #+#             */
/*   Updated: 2022/10/20 21:57:53 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);

#include <stdio.h>
int	main(void)
{
	printf("%d \n",ft_find_next_prime(-9));
	printf("%d \n",ft_find_next_prime(5425));
	printf("%d \n",ft_find_next_prime(2147483647));
	printf("%d \n",ft_find_next_prime(0));
	printf("%d \n",ft_find_next_prime(35));
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb == 1 || nb == 0 || nb < 0)
	{
		return (2);
	}
	i = 2;
	while (i <= (nb / i))
	{
		if (nb % i == 0)
		{
			return (ft_find_next_prime(nb + 1));
		}
		i++;
	}
	return (nb);
}
