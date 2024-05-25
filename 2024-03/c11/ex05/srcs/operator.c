/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:41:57 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/23 09:13:00 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	add(int x, int y)
{
	ft_putnbr(x + y);
	write(1, "\n", 1);
}

void	sub(int x, int y)
{
	ft_putnbr(x - y);
	write(1, "\n", 1);
}

void	mul(int x, int y)
{
	ft_putnbr(x * y);
	write(1, "\n", 1);
}

void	div(int x, int y)
{
	if (y == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return ;
	}
	ft_putnbr(x / y);
	write(1, "\n", 1);
}

void	mod(int x, int y)
{
	if (y == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return ;
	}
	ft_putnbr(x % y);
	write(1, "\n", 1);
}
