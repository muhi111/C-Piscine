/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:28:57 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/14 19:03:04 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void){
// 	int n = 1;
// 	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));
// 	n = 3;
// 	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));
// 	n = 0;
// 	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));
// 	n = -1;
// 	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));
// 	n = 4;
// 	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));
// 	n = 256;
// 	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));
// 	n = 2147395600;
// 	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));
// 	n = 2147483647;
// 	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));
// }