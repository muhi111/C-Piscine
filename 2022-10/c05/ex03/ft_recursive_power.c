/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 06:12:22 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/20 06:21:47 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	num;

	num = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	if (power > 0)
	{
		num = nb * ft_recursive_power(nb, power - 1);
		return (num);
	}
	else
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_recursive_power(5, 2));
// }