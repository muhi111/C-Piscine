/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyanagaw <nyanagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:32:46 by nyanagaw          #+#    #+#             */
/*   Updated: 2022/10/18 16:23:47 by nyanagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check_argu(char *base)
{
	int	base_len;
	int	i;
	int	j;

	base_len = ft_strlen(base);
	if (!base || base_len == 1)
	{
		return (1);
	}
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
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

void	ft_putnbr(int nbr, char *base)

{
	int	hex;
	int	base_len;

	if (nbr == 0)
	{
		return ;
	}
	base_len = ft_strlen(base);
	hex = nbr % base_len;
	nbr /= base_len;
	ft_putnbr(nbr, base);
	ft_putchar(base[hex]);
}

void	ft_putnbr_base(int nbr, char *base)

{
	int	argu;

	argu = check_argu(base);
	if (argu)
	{
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	ft_putnbr(nbr, base);
	if (nbr == 0)
	{
		ft_putchar('0');
	}
}
// int	main(void)
// {
// 	ft_putnbr_base(100, "0123456789abc+def");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-42, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-42, "0123456789ABCDEF");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-42, "poneyhdbubxiwhvif");
// 	write(1, "\n", 1);
// 	return (0);
// }
