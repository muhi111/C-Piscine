/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:10:10 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/13 13:15:30 by yuchiyam         ###   ########.fr       */
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

/*
#include <stdio.h>
int main(void)
{
    int c = 26;
    int d = 5;
    int *a = &c;
    int *b = &d;
    ft_ultimate_div_mod(a, b);
    printf("%d%s%d",*a,"あまり",*b);
    return (0);
}*/
