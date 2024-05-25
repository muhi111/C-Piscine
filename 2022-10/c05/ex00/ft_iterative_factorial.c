/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 05:06:04 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/20 05:25:53 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	num = 1;
	i = 0;
	while (nb - i > 0)
	{
		num = num * (nb - i);
		i++;
	}
	if (nb < 0)
		num = 0;
	return (num);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(0));
// }