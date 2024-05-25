/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taekklee <taekklee@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:28:29 by taekklee          #+#    #+#             */
/*   Updated: 2022/10/13 11:08:03 by taekklee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*skip_space(char *s)
{
	while (*s == ' ' || *s == '\f' || *s == '\n'
		|| *s == '\r' || *s == '\t' || *s == '\v')
		++s;
	return (s);
}

char	*sweep_sign(char *str, int *p_sgn)
{
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*p_sgn *= -1;
		++str;
	}
	return (str);
}

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	long long	n;
	int			sgn;

	str = skip_space(str);
	sgn = 1;
	str = sweep_sign(str, &sgn);
	n = 0;
	while (is_numeric(*str))
	{
		n = n * 10 + (*str - '0');
		++str;
	}
	return ((int)(sgn * n));
}
