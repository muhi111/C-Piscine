/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:02:07 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/18 19:39:52 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_printable(char str)
{
	if (str < ' ' || str > '~')
		return (0);
	else
		return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	while (str[count] != '\0')
	{
		if (check_printable(str[count]) == 1)
		{
			ft_putchar(str[count]);
			count++;
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(base[(unsigned char)str[count] / 16]);
			ft_putchar(base[(unsigned char)str[count] % 16]);
			count++;
		}
	}
}

int main(void)
{
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    return (0);
}