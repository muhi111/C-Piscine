/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtachiba <rtachiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:15:14 by rtachiba          #+#    #+#             */
/*   Updated: 2022/10/20 02:08:49 by rtachiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

int	ftt_strlne(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		write(1, par[i].str, ftt_strlne(par[i].str));
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, ftt_strlne(par[i].copy));
		write(1, "\n", 1);
		++i;
	}
}

// void				ft_show_tab(struct s_stock_str *par);
// struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
// int					ftt_strlne(char *c);

// int	main(void)
// {
// 	char		*strs[3] = {"hoge", "aizu", "foo"};
// 	t_stock_str	*stocks;

// 	stocks = ft_strs_to_tab(3, strs);
// 	// stocks[0].copy = c;
// 	ft_show_tab(stocks);
// 	return (0);
// }
