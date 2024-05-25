/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 06:22:44 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/20 06:28:57 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	num;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	num = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (num);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int i;
// 	for (i = 0; i < 8; i++)
// 	{
// 		printf("%d, ", ft_fibonacci(i));
// 	}
// }