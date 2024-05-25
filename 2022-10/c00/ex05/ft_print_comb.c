/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:43:32 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/13 12:58:13 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_convert(int digit1, int digit2, int digit3)
{
	ft_putchar(digit1 + 48);
	ft_putchar(digit2 + 48);
	ft_putchar(digit3 + 48);
	if (digit1 != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	digit1;
	int	digit2;
	int	digit3;

	digit1 = 0;
	while (digit1 <= 7)
	{
		digit2 = 1;
		while (digit2 <= 8)
		{
			digit3 = 2;
			while (digit3 <= 9)
			{
				if (digit1 < digit2 && digit2 < digit3)
				{
					ft_print_convert(digit1, digit2, digit3);
				}
				digit3 ++;
			}
			digit2 ++;
		}
		digit1 ++;
	}
}

/*
int main(void)
{
    ft_print_comb();
    return (0);
}*/
