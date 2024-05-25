/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:16:56 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/13 12:56:16 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	a;

	a = 0;
	while (a <= 9)
	{
		ft_putchar(a + 48);
		a ++;
	}
}

/*
int main(void)
{
    ft_print_numbers();
    return (0);
}*/
