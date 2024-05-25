/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasaoka <tasaoka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:00:04 by tasaoka           #+#    #+#             */
/*   Updated: 2022/10/13 00:45:19 by tasaoka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
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

void	print_by_base(unsigned long long nbr, char *base)
{
	unsigned long long	length;

	length = ft_strlen(base);
	if (nbr >= length)
	{
		print_by_base(nbr / length, base);
		print_by_base(nbr % length, base);
	}
	else
		write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned long long	ll_nbr;

	if (!is_valid(base))
		return ;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	ll_nbr = (unsigned long long)nbr;
	print_by_base(ll_nbr, base);
}
