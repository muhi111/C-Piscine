/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sucsses_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:02:54 by masayama          #+#    #+#             */
/*   Updated: 2024/03/24 20:55:58 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int	contain_nbr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('0' <= str[i] && str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

int	is_space(char c)
{
	if (c == ' ' || (9 <= c && c <= 13))
		return (1);
	return (0);
}

int	is_sigin(char c)
{
	if (c == '+' || c == '-' || c == '0')
		return (1);
	return (0);
}

int	is_nbr(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	is_sucsses_nbr(char *str, char **nbr_start)
{
	int	flag;
	int	i;

	i = 0;
	flag = 1;
	if (ft_strlen(str) == 0 || !contain_nbr(str))
		return (0);
	while (str[i] && is_space(str[i]))
		i++;
	while (str[i] && is_sigin(str[i]))
	{
		if (str[i++] == '-')
			flag *= -1;
	}
	if (str[i] == 0 && str[i - 1] == '0')
		str[--i] = '0';
	*nbr_start = &str[i];
	while (str[i])
	{
		if (!is_nbr(str[i++]))
			return (0);
	}
	if (flag < 0)
		return (0);
	return (1);
}
