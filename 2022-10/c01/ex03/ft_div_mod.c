/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:01:25 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/17 13:58:48 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
	{
		return ;
	}
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int main(void)
{
    int a, b, c, d;
    int *div, *mod;
    div = &c;
    mod = &d;
    a = 10;
    b = ;
    ft_div_mod(a, b, div, mod);
    printf("%d%s%d",c,"あまり",d);
    return (0);
}
