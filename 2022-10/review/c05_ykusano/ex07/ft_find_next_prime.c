/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 01:10:39 by ykusano           #+#    #+#             */
/*   Updated: 2022/10/14 18:18:34 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	else if (nb % 2 == 0)
		return (ft_find_next_prime(nb + 1));
	if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}

#include <stdio.h>

int main (void)
{
	int	i;

	i = -100;
    while (i < 100)
	{
		printf("%d -> %d\n", i, ft_find_next_prime(i));
		i++;
	}
    printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
    printf("%d -> %d\n", 78989, ft_find_next_prime(78989));
    printf("%d -> %d\n", 2147483643, ft_find_next_prime(2147483643));
    printf("%d -> %d\n", 2147483645, ft_find_next_prime(2147483645));
    printf("%d -> %d\n", 2147483646, ft_find_next_prime(2147483646));
    printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));
    return (0);
}