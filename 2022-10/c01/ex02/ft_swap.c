/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:53:50 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/13 13:14:04 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>
int main(void)
{
    int x = 10;
    int y = 20;
    int *a;
    int *b;
    a = &x;
    b = &y;
    printf("%s%d%s%d","x:",*a,"y:",*b);
    ft_swap(a,b);
    printf("%s%d%s%d","x:",*a,"y:",*b);
    return (0);
}*/
