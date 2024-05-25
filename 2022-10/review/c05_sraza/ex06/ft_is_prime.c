/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:20:54 by sraza             #+#    #+#             */
/*   Updated: 2022/10/20 21:57:02 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

#include <stdio.h>
int	main(void)
{
	printf("%d \n",ft_is_prime(-29));
	printf("%d \n",ft_is_prime(2));
	printf("%d \n",ft_is_prime(317457));

	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 1 || nb == 0 || nb < 0)
	{
		return (0);
	}
	i = 2;
	while (i <= (nb / i))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
