/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 22:50:25 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/21 09:00:00 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
	{
		return (1);
	}
	return (0);
}

int	ft_atoi_base_sub(char *str, int sign, char *base, int base_num)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < base_num)
		{
			if (str[i] == base[j])
			{
				result = result * base_num - j;
				break ;
			}
			else if (j == base_num - 1)
			{
				return (result * ((-1) * sign));
			}
			j++;
		}
		i++;
	}
	return (result * ((-1) * sign));
}

int	check(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (ft_is_space(base[i]) || base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	base_num;

	i = 0;
	sign = 1;
	base_num = ft_strlen(base);
	while (ft_is_space(str[i]))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = sign * (-1);
		}
		i++;
	}
	return (ft_atoi_base_sub(str + i, sign, base, base_num));
}
