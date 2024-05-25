/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:46:50 by ykusano           #+#    #+#             */
/*   Updated: 2022/10/14 18:16:47 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}


#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;

	i = 0;
	while (i < 100)
	{
		n = ft_is_prime(i);
		if (n == 1)
		{
			printf("%d = %d : %dは yes 素数\n", i, n, i);
			printf("---------------\n");
		}
		else
		{
			printf("%d = %d : %dは not \n", i, n, i);
			printf("---------------\n");
		}
		i++;
	}
	return (0);
}
