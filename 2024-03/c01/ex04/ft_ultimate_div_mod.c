/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:12:26 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/06 15:24:58 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// #include <stdio.h>
// int main(void){
// 	int a = 15, b = 7;
// 	printf("%d ÷ %d = ", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d あまり %d\n", a, b);
// }