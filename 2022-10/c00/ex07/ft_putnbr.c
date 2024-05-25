/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:16:16 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/14 17:54:18 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	get_digit(int num)
{
	int	count;

	count = 1;
	while (num >= 10)
	{
		num = num / 10;
		count ++;
	}
	return (count);
}

int	ten_exp(int digit)
{
	int	num;
	int	count;

	num = 1;
	count = 0;
	while (count ++ < (digit - 1))
	{
		num = num * 10;
	}
	return (num);
}

int	ft_putnbr(int nb)
{
	int	a;
	int	count;
	int	digit;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar(2 + 48);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	count = 0;
	digit = get_digit(nb);
	a = nb;
	while (count < get_digit(nb))
	{
		ft_putchar((a / ten_exp(digit - count)) + 48);
		a = a - ((a / ten_exp(digit - count)) * ten_exp(digit - count));
		count ++;
	}
	return (0);
}

/*
int main(void)
{
    ft_putnbr(-2147483648);
    ft_putchar('\n');
    ft_putnbr(98347);
    return (0);
}*/
