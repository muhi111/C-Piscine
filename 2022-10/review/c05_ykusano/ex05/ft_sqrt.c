/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:53:00 by ykusano           #+#    #+#             */
/*   Updated: 2022/10/14 18:15:50 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 1)
		return (0);
	if (nb > 0)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			else if (i >= 46340)
				break ;
			i++;
		}
	}
	return (0);
}


#include <stdio.h>

int	ft_sqrt(int index);

int	main(void)
{
	int	i;

	i = -5;
	while (i < 100)
	{
		printf("ft_sqrt : %d = %d\n", i, ft_sqrt(i));
		printf("--------------------\n");
		i++;
	}
	return (0);
}
