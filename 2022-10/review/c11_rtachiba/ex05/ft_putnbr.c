/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtachiba <rtachiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 02:29:27 by rtachiba          #+#    #+#             */
/*   Updated: 2022/10/22 02:34:35 by rtachiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	judge(long nb, char num[15], int now)
{
	char	display;

	if (nb == 0)
	{
		ft_putchar('0');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (nb > 0)
	{
		now--;
		display = (char)(nb % 10 + '0');
		num[now] = display;
		nb /= 10;
	}
	while (now < 14)
	{
		ft_putchar(num[now]);
		now++;
	}
}

void	ft_putnbr(int nb)
{
	char	num[15];
	int		now;

	now = 14;
	judge(nb, num, now);
}
