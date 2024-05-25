/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:48:01 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/14 15:32:36 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

// #include <stdio.h>
// int main(void){
// 	int n;
// 	n = 3;
// 	printf("%d! = %d\n", n, ft_recursive_factorial(n));
// 	n = 5;
// 	printf("%d! = %d\n", n, ft_recursive_factorial(n));
// 	n = 0;
// 	printf("%d! = %d\n", n, ft_recursive_factorial(n));
// 	n = 1;
// 	printf("%d! = %d\n", n, ft_recursive_factorial(n));
// 	n = -1;
// 	printf("%d! = %d\n", n, ft_recursive_factorial(n));
// }