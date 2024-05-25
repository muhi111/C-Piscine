/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:52:43 by soaoki            #+#    #+#             */
/*   Updated: 2024/03/10 23:00:43 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	horizon(int y);
void	vertical(int y);
void	wvertical(int x, int y);

void	rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	else if (x > 1 && y == 1)
	{
		horizon(x);
	}
	else if (x == 1 && y > 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
		vertical(y);
		ft_putchar('o');
		ft_putchar('\n');
	}
	else
	{
		horizon(x);
		wvertical(x, y);
		horizon(x);
	}
}

void	vertical(int y)
{
	int	i;

	i = 0;
	while (i < y - 2)
	{
		ft_putchar('|');
		ft_putchar('\n');
		i++;
	}
}

void	horizon(int x)
{
	int	i;

	ft_putchar('o');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('-');
		i++;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	wvertical(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y - 2)
	{
		ft_putchar('|');
		j = 0;
		while (j < x - 2)
		{
			ft_putchar(' ');
			j++ ;
		}
		ft_putchar('|');
		ft_putchar('\n');
		i++;
	}
}
