/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasaoka <tasaoka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:00:17 by tasaoka           #+#    #+#             */
/*   Updated: 2022/10/12 18:55:34 by tasaoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

unsigned long long	ft_strlen(char *str)
{
	unsigned long long	i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

int	is_valid(char *base)
{
	unsigned long long	i;
	unsigned long long	j;
	unsigned long long	length;

	length = ft_strlen(base);
	if (length <= 1)
		return (0);
	i = 0;
	while (i < length)
	{
		if (base[i] == '+' || base[i] == '-' || ft_isspace(base[i]))
			return (0);
		j = i + 1;
		while (j < length)
		{
			if (base[i] == base[j])
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

long long	pos_at_base(char c, char *base)
{
	long long	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		++i;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	long long			res;
	long long			sign;
	unsigned long long	i;

	res = 0;
	sign = 1;
	i = 0;
	if (!(is_valid(base)))
		return (0);
	while (str[i] != '\0' && ft_isspace(str[i]))
		++i;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		++i;
	}
	while (str[i] != '\0' && pos_at_base(str[i], base) >= 0)
	{
		res = res * (long long)ft_strlen(base) + pos_at_base(str[i], base);
		++i;
	}
	return ((int)(sign * res));
}
