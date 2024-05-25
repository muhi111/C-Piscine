/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:26:41 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/14 22:10:14 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	about_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i < nb && i <= 46340)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	i = 2;
	while (i <= about_sqrt(nb))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		if (i == 2)
			i++;
		else
			i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = 0;
	while (!ft_is_prime(nb + i))
	{
		if ((nb + i) % 2 == 0)
			i++;
		else
			i += 2;
	}
	return (nb + i);
}

// #include <stdio.h>
// int main(void){
// 	int n = -1;
// 	printf("is_prime(%d) = %d\n", n, ft_find_next_prime(n));
// 	n = 0;
// 	printf("is_prime(%d) = %d\n", n, ft_find_next_prime(n));
// 	n = 1;
// 	printf("is_prime(%d) = %d\n", n, ft_find_next_prime(n));
// 	n = 2;
// 	printf("is_prime(%d) = %d\n", n, ft_find_next_prime(n));
// 	n = 3;
// 	printf("is_prime(%d) = %d\n", n, ft_find_next_prime(n));
// 	n = 4;
// 	printf("is_prime(%d) = %d\n", n, ft_find_next_prime(n));
// 	n = 10;
// 	printf("is_prime(%d) = %d\n", n, ft_find_next_prime(n));
// 	n = 841;
// 	printf("is_prime(%d) = %d\n", n, ft_find_next_prime(n));
// 	n = 436273010;
// 	printf("is_prime(%d) = %d\n", n, ft_find_next_prime(n));
// 	n = 2147483647;
// 	printf("is_prime(%d) = %d\n", n, ft_find_next_prime(n));
// }