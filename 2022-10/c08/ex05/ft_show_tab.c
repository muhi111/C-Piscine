/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:06:32 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/27 22:57:56 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
		count++;
	return (count);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		write(1, (str + count), 1);
		count++;
	}
}

void	ft_putnbr(int nb)
{
	int	j;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	j = nb % 10;
	if (nb >= 10)
	{
		nb = nb / 10;
		ft_putnbr(nb);
	}
	ft_putchar(j + '0');
}

void	ft_show_tab(struct s_stock_str *a)
{
	int	i;

	i = 0;
	while (a[i].str)
	{
		write(1, a[i].str, ft_strlen(a[i].str));
		write(1, "\n", 1);
		ft_putnbr(a[i].size);
		write(1, "\n", 1);
		write(1, a[i].copy, ft_strlen(a[i].copy));
		write(1, "\n", 1);
		++i;
	}
}
