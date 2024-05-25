/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:38:12 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/14 15:32:10 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

// #include <stdio.h>
// int main(void){
// 	int n;
// 	n = 3;
// 	printf("%d! = %d\n", n, ft_iterative_factorial(n));
// 	n = 5;
// 	printf("%d! = %d\n", n, ft_iterative_factorial(n));
// 	n = 0;
// 	printf("%d! = %d\n", n, ft_iterative_factorial(n));
// 	n = 1;
// 	printf("%d! = %d\n", n, ft_iterative_factorial(n));
// 	n = -1;
// 	printf("%d! = %d\n", n, ft_iterative_factorial(n));
// }