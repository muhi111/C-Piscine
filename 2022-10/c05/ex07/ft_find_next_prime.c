/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:32:17 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/21 19:34:24 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	like_sqrt(int nb)
{
	int	i;

	i = 0;
	while ((i * i) < nb && i < 46341)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	sqrt = like_sqrt(nb);
	if (nb != 2 && nb % 2 == 0)
		return (0);
	else if (nb == 1 || nb == 0 || nb < 0)
		return (0);
	else if (nb == 2)
		return (1);
	i = 2;
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (ft_is_prime(nb) == 1)
		return (nb);
	else if (nb <= 1)
		return (2);
	else if (nb % 2 == 0)
	{
		nb = nb - 1;
	}
	i = 2;
	while (ft_is_prime(nb + i) != 1)
		i = i + 2;
	return (nb + i);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_find_next_prime(2147483645));
	printf("%d\n", ft_find_next_prime(4));
}