/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 00:40:46 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/27 11:39:29 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	process_input(t_mapinf *map)
{
	max_square(map);
	print_map(map);
	free_map(map);
}

void	ft_error(void)
{
	write(2, "map error\n", 10);
}

int	main(int argc, char *argv[])
{
	int			i;
	t_mapinf	map;

	if (argc == 1)
	{
		if (read_stdin(&map))
		{
			ft_error();
			return (1);
		}
		process_input(&map);
		return (0);
	}
	i = 0;
	while (++i < argc)
	{
		if (read_file(argv[i], &map))
		{
			ft_error();
			continue ;
		}
		process_input(&map);
		init_map(&map);
	}
	return (0);
}
