/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:18:39 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/18 10:14:14 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		write(1, (str + count), 1);
		count ++;
	}
}
/*
int main(void)
{
    char a[] = "Hello World!";
    char *str = a;
    ft_putstr(str);
    return (0);
}*/
