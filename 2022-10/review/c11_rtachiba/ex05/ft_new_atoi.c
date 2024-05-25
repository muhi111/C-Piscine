/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtachiba <rtachiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:14:30 by rtachiba          #+#    #+#             */
/*   Updated: 2022/10/22 15:59:40 by rtachiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	num(char c)
{
	return (c >= '0' && c <= '9');
}

char	*sweep_sign(char *str, int *minus)
{
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*minus *= -1;
		++str;
	}
	return (str);
}

int	ft_new_atoi(char *str)
{
	long	n;
	int		sgn;

	n = 0;
	sgn = 1;
	str = sweep_sign(str, &sgn);
	if (*str < '0' && *str > '9')
		return (0);
	while (num(*str))
	{
		n = n * 10 + (*str - '0');
		++str;
	}
	return ((int)(sgn * n));
}
