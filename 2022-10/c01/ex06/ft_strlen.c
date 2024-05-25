/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:49:34 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/13 13:30:17 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count ++;
	}
	return (count);
}

/*
#include <stdio.h>
int main(void)
{
    char a[] = "Hello World!";
    char *str = a;
    printf("%d",ft_strlen(str));
    return (0);
	// 出力結果 12
}*/
