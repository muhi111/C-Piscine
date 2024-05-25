/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:40:43 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/13 21:59:23 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(unsigned char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

void	print_non_printable(int i)
{
	ft_putchar('\\');
	if ((i / 16) >= 10)
	{
		ft_putchar((i / 16) - 10 + 'a');
	}
	else
	{
		ft_putchar((i / 16) + '0');
	}
	if ((i % 16) >= 10)
	{
		ft_putchar((i % 16) - 10 + 'a');
	}
	else
	{
		ft_putchar((i % 16) + '0');
	}
}

void	ft_putstr_non_printable(unsigned char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_printable(str[i]))
		{
			ft_putchar(str[i]);
		}
		else
		{
			print_non_printable(str[i]);
		}
		i++;
	}
}

// #include <stdio.h>
// int main(void){
// 	unsigned char str1[] = "Coucou\ntu vas bien ?";
// 	ft_putstr_non_printable(str1);
// 	printf("\n");
	// unsigned char str2[3];
	// str2[0] = 251;
	// str2[1] = 169;
	// str2[2] = 0;
	// ft_putstr_non_printable(str2);
// }