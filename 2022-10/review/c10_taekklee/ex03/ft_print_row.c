/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_row.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taekklee <taekklee@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:58:50 by taekklee          #+#    #+#             */
/*   Updated: 2022/10/21 14:43:03 by taekklee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);

char	dec_to_hex(int n)
{
	if (n < 10)
		return ('0' + n);
	return ('a' + n - 10);
}

void	int_as_hex(int n, int d)
{
	if (d > 0)
		int_as_hex(n >> 4, d - 1);
	ft_putchar(dec_to_hex(n & 15));
	return ;
}

void	eight_hex(char *s, int i, int to, int end)
{
	while (i < to)
	{
		if (i < end)
			int_as_hex((unsigned char)s[i], 1);
		else
			ft_putstr("  ");
		ft_putchar(' ');
		++i;
	}
}

void	print_printables(char *s, int i, int to)
{
	while (i < to)
	{
		if ((s[i] >= ' ' && s[i] <= '~'))
			ft_putchar(s[i]);
		else
			ft_putchar('.');
		++i;
	}
}

void	ft_print_row(char *s, int from, int end)
{
	int_as_hex(from, 7);
	ft_putstr("  ");
	eight_hex(s, from, from + 8, end);
	ft_putstr(" ");
	eight_hex(s, from + 8, from + 16, end);
	ft_putstr(" |");
	if (from + 16 > end)
		print_printables(s, from, end);
	else
		print_printables(s, from, from + 16);
	ft_putstr("|\n");
	return ;
}
