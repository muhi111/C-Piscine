/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtachiba <rtachiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:35:33 by rtachiba          #+#    #+#             */
/*   Updated: 2022/10/21 14:46:00 by rtachiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int		i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// int	main(void)
// {
// 	int	tab[5];
// 	int	i;

// 	i =0;
// 	while (i <5)
// 	{
// 		tab[i] = i;
// 		i++;
// 	}
// 	ft_foreach(tab, 5, &ft_putnbr);
// }

// memo
// tab一つ一つの要素をwhile文でput nbrに送って表示
// int lengthはwhileの条件として使用
// 