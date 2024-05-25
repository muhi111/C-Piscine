/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:04:35 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/14 15:58:10 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
	{
		return (1);
	}
	return (0);
}

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

void	ft_putnbr_base_sub(long long nb, int base_num, char *base)
{
	char	c;

	if (nb != 0)
	{
		ft_putnbr_base_sub(nb / base_num, base_num, base);
		c = base[nb % base_num];
		write(1, &c, 1);
	}
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
		if (base[i] == '+' || base[i] == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	long long	nbr_long;
	int			base_num;

	if (check(base))
	{
		return ;
	}
	if (nbr == 0)
	{
		write(1, base, 1);
		return ;
	}
	nbr_long = (long long)nbr;
	base_num = ft_strlen(base);
	if (nbr_long < 0)
	{
		write(1, "-", 1);
		nbr_long = nbr_long * (-1);
	}
	ft_putnbr_base_sub(nbr_long, base_num, base);
}

// #include <stdio.h>
// int main(void){
// 	ft_putnbr_base(-2147483648, "12-3");
// 	printf("\n");
// 	ft_putnbr_base(-2147483648, "1232");
// 	printf("\n");
// 	ft_putnbr_base(-2147483648, "1");
// 	printf("\n");
// 	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
// 	printf("\n");
// 	ft_putnbr_base(329469234, "AKFHrUWBYR");
// 	printf("\n");
// 	ft_putnbr_base(0, "askdufh");
// 	printf("\n");
// }
