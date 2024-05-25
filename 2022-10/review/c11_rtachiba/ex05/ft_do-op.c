/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do-op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtachiba <rtachiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:04:05 by rtachiba          #+#    #+#             */
/*   Updated: 2022/10/22 13:48:03 by rtachiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	ft_putasner(void)
{
	ft_putchar('0');
	ft_putchar('\n');
}

void	ft_formula(int s1, int s2, char *op)
{
	int	ans;
	int	(*calc[5])(int, int);

	calc[0] = add;
	calc[1] = sub;
	calc[2] = mul;
	calc[3] = div;
	calc[4] = mod;
	if (*op == '+')
		ans = (*calc[0])(s1, s2);
	else if (*op == '-')
		ans = (*calc[1])(s1, s2);
	else if (*op == 42)
		ans = (*calc[2])(s1, s2);
	else if (*op == '/')
		ans = (*calc[3])(s1, s2);
	else if (*op == '%')
		ans = (*calc[4])(s1, s2);
	else
	{
		ft_putasner();
		return ;
	}
	ft_putnbr(ans);
	ft_putchar('\n');
}

int	ft_zeo_error(char *op, int s2)
{
	if (*op == '/' && s2 == 0)
	{
		write(1, DIV_ERR, 25);
		return (0);
	}
	if (*op == '%' && s2 == 0)
	{
		write(1, MOD_ERR, 23);
		return (0);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int		s1;
	int		s2;
	int		check;
	char	*op;

	op = argv[2];
	if (argc != 4)
		return (0);
	s1 = ft_new_atoi(argv[1]);
	s2 = ft_new_atoi(argv[3]);
	check = 1;
	check = ft_zeo_error(op, s2);
	if (check == 0)
		return (0);
	ft_formula(s1, s2, op);
	return (0);
}
