/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:09:05 by sraza             #+#    #+#             */
/*   Updated: 2022/10/20 21:55:27 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

#include <stdio.h>
int	main(void)
{
	int	nb;
	nb = 25;
	printf("%d \n",ft_sqrt(nb));
	printf("%d \n",ft_sqrt(-1));
	printf("%d \n",ft_sqrt(1024));

	return (0);
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= (nb / i))
	{
		if (nb == i * i)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
