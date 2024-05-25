/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:05:16 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/06 09:12:09 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	increment(int num[10], int n)
{
	int	i;
	int	j;

	num[n - 1]++;
	i = n - 1;
	while (i > 0)
	{
		if (num[n - 1] >= 10)
		{
			num[i - 1]++;
			j = i;
			while (j < n)
			{
				num[j] = num[j - 1] + 1;
				j++;
			}
		}
		i--;
	}
}

void	print_num(int *num, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(num[i] + '0');
		i++;
	}
	if (num[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	num[10];
	int	i;

	i = 0;
	while (i < n)
	{
		num[i] = i;
		i++;
	}
	while (num[0] != 10 - n)
	{
		print_num(num, n);
		increment(num, n);
	}
	print_num(num, n);
}

// int main(void){
// 	ft_print_combn(1);
// 	ft_putchar('\n');
// 	ft_putchar('\n');
// 	ft_print_combn(2);
// 	ft_putchar('\n');
// 	ft_putchar('\n');
// 	ft_print_combn(3);
// 	ft_putchar('\n');
// 	ft_putchar('\n');
// 	ft_print_combn(9);
// }