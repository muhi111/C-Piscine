/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:45:34 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/09 15:56:50 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	edge_line(int x, int y, char A, char B)
{
	int	count;

	count = 1;
	ft_putchar(A);
	if (y != 1)
	{
		while (count <= (y - 2))
		{
			ft_putchar('B');
			count ++;
		}
		ft_putchar(B);
	}
	ft_putchar('\n');
}

void	middle_line(int x, int y)
{
	int	line_count;
	int	column_count;

	line_count = 1;
	while (line_count <= (x - 2))
	{
		ft_putchar('B');
		column_count = 1;
		if (y != 1)
		{
			while (column_count <= (y - 2))
			{
				ft_putchar(' ');
				column_count ++;
			}
			ft_putchar('B');
		}
		ft_putchar('\n');
		line_count ++;
	}
}

int	rush(int y, int x)
{
	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	edge_line(x, y, 'A', 'C');
	if (x != 1)
	{
		middle_line(x, y);
		edge_line(x, y, 'C', 'A');
	}
	return (0);
}
