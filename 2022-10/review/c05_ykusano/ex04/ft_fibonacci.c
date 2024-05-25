/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:37:50 by ykusano           #+#    #+#             */
/*   Updated: 2022/10/14 18:11:48 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (n);
	}
}


#include <stdio.h>

int    main(void)
{
    int    i;

    i = -5;
    while (i < 30)
    {
        if (i == 0)
        {
            printf("%2d列目                   %6d\n", i,  ft_fibonacci(i));
        }
        else if (i == 1)
        {
            printf("%2d列目                   %6d\n", i, ft_fibonacci(i));
        }
        else
        {
            printf("%2d列目 %6d + %6d = %6d\n", i, ft_fibonacci(i - 2), ft_fibonacci(i - 1), ft_fibonacci(i));
        }
        i++;
    }
    return (0);
}
