/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:21:04 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/14 22:03:35 by youchiya         ###   ########.fr       */
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
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main(void){
// 	int n = -1;
// 	printf("is_prime(%d) = %d\n", n, ft_is_prime(n));
// 	n = 0;
// 	printf("is_prime(%d) = %d\n", n, ft_is_prime(n));
// 	n = 1;
// 	printf("is_prime(%d) = %d\n", n, ft_is_prime(n));
// 	n = 2;
// 	printf("is_prime(%d) = %d\n", n, ft_is_prime(n));
// 	n = 3;
// 	printf("is_prime(%d) = %d\n", n, ft_is_prime(n));
// 	n = 4;
// 	printf("is_prime(%d) = %d\n", n, ft_is_prime(n));
// 	n = 11;
// 	printf("is_prime(%d) = %d\n", n, ft_is_prime(n));
// 	n = 529;
// 	printf("is_prime(%d) = %d\n", n, ft_is_prime(n));
// 	n = 841;
// 	printf("is_prime(%d) = %d\n", n, ft_is_prime(n));
// 	n = 2147483647;
// 	printf("is_prime(%d) = %d\n", n, ft_is_prime(n));
// }