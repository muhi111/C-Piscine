/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:29:39 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/20 03:31:51 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

// int main(void)
// {
//     ft_putnbr(-2147483648);
//     ft_putchar('\n');
//     ft_putnbr(2837462);
//     return (0);
// }