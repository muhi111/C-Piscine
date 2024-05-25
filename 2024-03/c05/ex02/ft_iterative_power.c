/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:52:01 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/14 19:03:50 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	else if (nb == 0 && power > 0)
	{
		return (0);
	}
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

// #include <stdio.h>
// int main(void){
// 	int nb;
// 	int power;
// 	power = 3;
// 	nb = -2;
// 	printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power));
// 	power = -2;
// 	printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power));
// 	nb = 0;
// 	printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power));
// 	nb = 2;
// 	printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power));
// 	power = 1;
// 	printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power));
// 	power = 0;
// 	printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power));
// 	nb = -2;
// 	printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power));
// 	nb = 0;
// 	printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power));
// 	power = -1;
// 	printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power));
// }