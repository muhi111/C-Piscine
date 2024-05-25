/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyanagaw <nyanagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:00:02 by nyanagaw          #+#    #+#             */
/*   Updated: 2022/10/16 21:00:11 by nyanagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum(int i)
{
	int		j;
	char	c;

	if (i == 0)
	{
		return ;
	}
	j = i % 10;
	c = '0' + j;
	i = i / 10;
	ft_putnum(i);
	ft_putchar(c);
}

void	ft_putnbr(int i)
{
	if (i < 0)
	{
		ft_putchar('-');
		i *= -1;
	}
	ft_putnum(i);
	if (i == 0)
	{
		ft_putchar('0');
	}
}
