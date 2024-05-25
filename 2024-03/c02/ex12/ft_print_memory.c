/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:26:24 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/14 16:06:25 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned long long	pow_16(int n)
{
	unsigned long long	result;

	result = 1;
	while (n > 0)
	{
		result = result * 16;
		n--;
	}
	return (result);
}

void	print_hex_num(unsigned long long nb, int digit)
{
	unsigned long long	num;
	char				c;

	num = pow_16(digit - 1);
	while (num >= 1)
	{
		if ((nb / num) >= 10)
		{
			c = (nb / num) - 10 + 'a';
			write(1, &c, 1);
		}
		else
		{
			c = (nb / num) + '0';
			write(1, &c, 1);
		}
		nb = nb - (nb / num) * num;
		num = num / 16;
	}
}

void	print_str(void *addr, unsigned int size, unsigned int line)
{
	unsigned int	i;
	unsigned char	c;

	i = 0;
	while (i < 16)
	{
		if (((16 * line) + i) >= size)
		{
			write(1, "\n", 1);
			return ;
		}
		c = *((unsigned char *)addr + (16 * line) + i);
		if (c >= 32 && c <= 126)
		{
			write(1, &c, 1);
		}
		else
		{
			write(1, ".", 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

void	ft_print_memory_sub(void *addr, unsigned int size, int i)
{
	unsigned int	j;

	j = 0;
	while (j < 16)
	{
		if (((16 * i) + j) >= size)
		{
			write(1, "  ", 2);
		}
		else
		{
			print_hex_num(*((unsigned char *)addr + (16 * i) + j), 2);
		}
		if (j % 2 == 1)
		{
			write(1, " ", 1);
		}
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < (size / 16) + 1)
	{
		print_hex_num((unsigned long long)(unsigned char *)addr + (16 * i), 16);
		write(1, ": ", 2);
		ft_print_memory_sub(addr, size, i);
		print_str(addr, size, i);
		i++;
	}
	return (addr);
}

#include <stdio.h>
int main(void){
	char str[3];
	str[0] = 251;
	str[1] = 169;
	str[2] = 0;
	ft_print_memory(str, 0);

	// char str2[] = "";
	// ft_print_memory(str2, sizeof(str2)/sizeof(char));
}