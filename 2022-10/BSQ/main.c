/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:49:37 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/26 19:11:33 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	char	string[4];
	int		size[2];
	char	**b;
	int		i;

	if (argc == 1)
	{
		b = handle_map(read_map_nomal(), string, size);
		if (b == 0)
			ft_putstr("map error\n");
		else
			write_result(gen_square(b, size, string), size);
	}
	i = 1;
	while (i < argc)
	{
		b = handle_map(read_map(argv[i]), string, size);
		if (b == 0)
			ft_putstr("map error\n");
		else
			write_result(gen_square(b, size, string), size);
		i++;
	}
	return (0);
}
