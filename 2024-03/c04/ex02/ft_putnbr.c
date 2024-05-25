/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:30:10 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/18 22:25:03 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_sub(int nb)
{
	if (nb != 0)
	{
		ft_putnbr_sub(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
	}
	else if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr_sub(147483648);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * (-1);
		}
		ft_putnbr_sub(nb);
	}
}

// #include <stdio.h>
// int main(void){
// 	ft_putnbr(-87);
// 	printf("\n");
// 	ft_putnbr(0);
// 	printf("\n");
// 	ft_putnbr(2147483647);
// 	printf("\n");
// 	ft_putnbr(-2147483648);
// 	printf("\n");
// }