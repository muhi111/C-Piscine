/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyanagaw <nyanagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:54:43 by nyanagaw          #+#    #+#             */
/*   Updated: 2022/10/18 16:24:31 by nyanagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*find_space(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	return (&str[i]);
}

char	*find_minus(char *str, int *sign)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			*sign += 1;
		}
		i++;
	}
	return (&str[i]);
}

char	*find_num(char *str, int *num)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		*num += str[i] - 48;
		*num *= 10;
		i++;
	}
	return (&str[i]);
}

int	ft_atoi(char *str)
{
	int		sign;
	int		nbr;
	char	*s;

	s = str;
	nbr = 0;
	sign = 0;
	s = find_space(s);
	s = find_minus(s, &sign);
	s = find_num(s, &nbr);
	nbr /= 10;
	if (sign % 2 == 1)
		nbr *= -1;
	return (nbr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("   \t\v---+---+1234 \v\t\r--++567 \v\t\f\nas43"));
// }
