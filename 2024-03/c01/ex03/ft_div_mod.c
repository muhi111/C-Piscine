/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:06:48 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/07 19:29:02 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int main(void){
	int a = 15, b = 7;
	int div, mod;
	ft_div_mod(a,b,&div,&mod);
	printf("%d ÷ %d = %d あまり %d\n", a, b, div, mod);
}