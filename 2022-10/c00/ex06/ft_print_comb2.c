/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:50:30 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/13 12:59:02 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_convert2(int a, int b)
{
	int	d1;
	int	d2;
	int	d3;
	int	d4;

	d1 = a / 10;
	d2 = a % 10;
	d3 = b / 10;
	d4 = b % 10;
	ft_putchar(d1 + 48);
	ft_putchar(d2 + 48);
	ft_putchar(' ');
	ft_putchar(d3 + 48);
	ft_putchar(d4 + 48);
	if (! (d1 == 9 && d2 == 8))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_convert2(a, b);
			b ++;
		}
		a++;
	}
}
/*
int main(void)
{
    ft_print_comb2();
    return (0);
}*/
