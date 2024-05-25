/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyanagaw <nyanagaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:12:53 by nyanagaw          #+#    #+#             */
/*   Updated: 2022/10/18 16:25:16 by nyanagaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if ((base[i] == '-' || base[i] == '+') || (base[i] >= 9
				&& base[i] <= 13) || (base[i] == 32))
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

char	*find_inv(char *str, int *count)
{
	int	i;

	i = 0;
	while (str[i] == '-' || str[i] == '+' || (str[i] >= 9 && str[i] <= 13)
		|| str[i] == 32)
	{
		if (str[i] == '-')
		{
			*count += 1;
		}
		i++;
	}
	return (&str[i]);
}

int	base_hex(char *str, char *base, int *nbr)
{
	int	base_len;
	int	count;
	int	i;
	int	j;

	base_len = ft_strlen(base);
	count = 0;
	i = 0;
	str = find_inv(str, &count);
	while (str[i] != '\0' && (str[i] >= 33 && str[i] <= 126) && !(str[i] == 43
			|| str[i] == 45))
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
				*nbr = (*nbr + j) * base_len;
			j++;
		}
		i++;
	}
	*nbr /= base_len;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int	argu;
	int	nbr;
	int	base_len;
	int	count;
	int	i;

	i = 0;
	nbr = 0;
	base_len = ft_strlen(base);
	argu = check_argu(base);
	if (argu)
		return (0);
	count = base_hex(str, base, &nbr);
	if (count % 2 == 1)
		nbr *= -1;
	return (nbr);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_atoi_base("    +++++-----133742-ytfx819", "0123456789"));
// 	printf("%d\n", ft_atoi_base("         ---bc26758", "abcdefghij"));
// 	printf("%d\n", ft_atoi_base("     +---539", "0123456789abcdef"));
// }
