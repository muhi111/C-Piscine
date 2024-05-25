/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skotone <skotone@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 08:53:48 by skotone           #+#    #+#             */
/*   Updated: 2022/10/17 08:53:48 by skotone          ###   ########.fr       */
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
	int	i;

	i = 1;
	while (i < argc)
	{
		c = 0;
		while (argv[i][c] != '\0')
		{
			ft_putchar(argv[i][c]);
			c ++;
		}
		ft_putchar('\n');
		i ++;
	}
	return (0);
}
