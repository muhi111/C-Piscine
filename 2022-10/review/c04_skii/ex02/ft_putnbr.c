/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:25:14 by skii              #+#    #+#             */
/*   Updated: 2022/10/21 23:24:52 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int		check_nb(int nb);
int		get_x(int nb);

void	ft_putnbr(int nb)
{
	int		x;
	int		n;
	int		nb_sub;
	char	c;

	if (check_nb(nb) == 1)
	{
		write(1, "-2147483648", 12);
		return ;
	}
	else if (check_nb(nb) == -1)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	x = get_x(nb);
	while (x >= 1)
	{
		nb_sub = nb % x;
		n = nb / x;
		c = n + '0';
		write(1, &c, 1);
		x = x / 10;
		nb = nb_sub;
	}
}

int	check_nb(int nb)
{
	if (nb == -2147483648)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (-1);
	}
	return (nb);
}

int	get_x(int nb)
{
	int	x;
	int	n;

	x = 1;
	n = nb / x;
	while (n > 10)
	{
		x = x * 10;
		n = nb / x;
	}
	return (x);
}

int	main(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = -1;
	j = 0;
	k = 114514;
	l = -2147483648;

	ft_putnbr(i);
	printf("\n");
	ft_putnbr(j);
	printf("\n");
	ft_putnbr(k);
	printf("\n");
	ft_putnbr(l);

}
