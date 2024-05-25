/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:52:18 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/06 15:23:23 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

// #include <stdio.h>
// int main(void){
// 	int a = 1, b= 2;
// 	printf("before : a = %d, b = %d\n", a, b);
// 	ft_swap(&a,&b);
// 	printf("after  : a = %d, b = %d\n", a, b);
// }