/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksaito <taksaito@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:47:57 by taksaito          #+#    #+#             */
/*   Updated: 2022/10/18 04:37:08 by taksaito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_digit(int num, int radix)
{
	int	digit;

	digit = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num /= radix;
		digit++;
	}
	return (digit);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_duplicate(char *base)
{
	int	size;
	int	i;
	int	j;

	i = 0;
	size = ft_strlen(base);
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	contain_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	get_integer(char *str, char *base)
{
	int	ret;
	int	i;
	int	blen;

	blen = 0;
	while (base[blen])
		blen++;
	ret = 0;
	while (*str && contain_base(*str, base))
	{
		i = 0;
		while (base[i])
		{
			if (base[i] == *str)
				break ;
			i++;
		}
		ret = blen * ret - i;
		str++;
	}
	return (ret);
}
