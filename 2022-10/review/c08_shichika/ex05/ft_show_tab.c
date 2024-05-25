/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Shion Ichikawa <shion1305@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:04:43 by Shion Ichikawa    #+#    #+#             */
/*   Updated: 2022/10/18 14:47:32 by Shion Ichikawa   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	out;

	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	if (nbr >= 0)
	{
		out = '0' + nbr % 10;
		write(1, &out, 1);
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	ft_putstr(par->str);
	write(1, "\n", 1);
	ft_putnbr(par->size);
	write(1, "\n", 1);
	ft_putstr(par->copy);
	write(1, "\n", 1);
}
