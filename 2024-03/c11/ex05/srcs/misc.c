/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:24:53 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/23 09:18:11 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	add(int x, int y);
void	sub(int x, int y);
void	mul(int x, int y);
void	div(int x, int y);
void	mod(int x, int y);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr((-1) * nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
	else if (nb < 10)
	{
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
}

void	set_func_pointer(void (*p[5])(int, int))
{
	p[0] = &add;
	p[1] = &sub;
	p[2] = &mul;
	p[3] = &div;
	p[4] = &mod;
}
