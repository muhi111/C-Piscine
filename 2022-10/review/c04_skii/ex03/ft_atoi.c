/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 07:06:54 by skii              #+#    #+#             */
/*   Updated: 2022/10/21 23:26:35 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	is_space(char *str, int i)
{
	if (('\t' <= str[i] && str[i] <= '\r') || str[i] == ' ')
	{
		return (1);
	}
	return (0);
}

int	is_pm(char *str, int i)
{
	if (str[i] == '+' || str[i] == '-')
	{
		return (1);
	}
	return (0);
}

int	is_m(char *str, int i)
{
	if (str[i] == '-')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	mfrag;
	int	output;

	i = 0;
	mfrag = 1;
	output = 0;
	while (is_space(str, i))
	{
		i++;
	}
	while (is_pm(str, i))
	{
		if (is_m(str, i))
		{
			mfrag *= -1;
		}
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		output = (output * 10) + str[i] - '0';
		i++;
	}
	return (output * mfrag);
}

int	main(void)
{
	char	x[] = "\t   --+--1a223kj123";

	printf("%d", ft_atoi(x));
}
