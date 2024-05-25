/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:09:35 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/20 19:23:26 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	like_sqrt(int nb)
{
	int	i;

	i = 0;
	while ((i * i) < nb && i < 46341)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	sqrt = like_sqrt(nb);
	if (nb != 2 && nb % 2 == 0)
		return (0);
	else if (nb == 1 || nb == 0 || nb < 0)
		return (0);
	else if (nb == 2)
		return (1);
	i = 2;
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(2147483647));
// }