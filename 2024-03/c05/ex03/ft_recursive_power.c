/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:24:20 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/14 19:03:28 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (nb == 0 && power > 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

// #include <stdio.h>
// int main(void){
// 	int nb;
// 	int power;
// 	power = 2;
// 	nb = -2;
// 	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
// 	power = -2;
// 	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
// 	nb = 0;
// 	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
// 	nb = 2;
// 	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
// 	power = 1;
// 	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
// 	power = 0;
// 	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
// 	nb = -2;
// 	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
// 	nb = 0;
// 	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
// 	power = -1;
// 	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
// }