/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksaito <taksaito@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:58:14 by taksaito          #+#    #+#             */
/*   Updated: 2022/10/18 14:51:48 by taksaito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		get_digit(int num, int radix);
int		ft_strlen(char *str);
int		contain_base(char c, char *base);
int		is_duplicate(char *base);
int		get_integer(char *str, char *base);

int	valid_base(char *base)
{
	int	blen;
	int	i;

	i = 0;
	blen = ft_strlen(base);
	if (blen == 0 || blen == 1)
		return (0);
	if (is_duplicate(base))
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (!(base[i] >= 32 && base[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	sum;

	if (!valid_base(base))
		return (0);
	while (*str && (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
			|| *str == '\t' || *str == '\v'))
		str++;
	sign = 1;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	sum = get_integer(str, base);
	return (sign * sum * -1);
}

char	*allocation_num_str(int *num, int *digit, char *base_to)
{
	char	*ret;

	if (*num == 0)
	{
		ret = (char *)malloc(sizeof(char) * *digit + 1);
		ret[0] = base_to[0];
		ret[1] = '\0';
		return (ret);
	}
	else if (*num < 0)
	{
		(*digit)++;
		ret = (char *)malloc(sizeof(char) * *digit + 1);
		ret[0] = '-';
	}
	else
	{
		*num *= -1;
		ret = (char *)malloc(sizeof(char) * *digit + 1);
	}
	return (ret);
}

char	*convert_base_to(int num, char *base_to)
{
	int		radix;
	int		digit;
	char	*ret;
	int		i;

	i = 0;
	radix = ft_strlen(base_to);
	digit = get_digit(num, radix);
	ret = allocation_num_str(&num, &digit, base_to);
	while (num)
	{
		ret[digit - i - 1] = base_to[0 - (num % radix)];
		num /= radix;
		i++;
	}
	ret[digit] = '\0';
	return (ret);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	num;

	if (!valid_base(base_from))
		return (NULL);
	if (!valid_base(base_to))
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	return (convert_base_to(num, base_to));
}

// int	main(void)
// {
// 	char	*c;

// 	c = ft_convert_base("-2147483648", "0123456789", "0123456789ABCDEF");
// 	printf("%s\n", c);
// 	c = ft_convert_base("2147483647", "0123456789", "0123456789ABCDEF");
// 	printf("%s\n", c);
// 	c = ft_convert_base("0", "0123456789", "0123456789ABCDEF");
// 	printf("%s\n", c);
// 	c = ft_convert_base("-0", "0123456789", "0123456789ABCDEF");
// 	printf("%s\n", c);
// }
