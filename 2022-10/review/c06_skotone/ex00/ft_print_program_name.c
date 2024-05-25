/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skotone <skotone@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 08:42:33 by skotone           #+#    #+#             */
/*   Updated: 2022/10/17 08:42:33 by skotone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	c;

	c = 0;
	while (argc > 0 && argv[0][c] != '\0')
	{
		ft_putchar(argv[0][c]);
		c ++;
	}
	ft_putchar('\n');
	return (0);
}
