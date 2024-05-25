/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:05:40 by ryfukush          #+#    #+#             */
/*   Updated: 2022/10/26 20:29:28 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*read_map(char *map_name)
{
	int		map_open;
	char	*map;
	char	*a;
	int		map_read;
	int		i;

	map_open = open(map_name, O_RDONLY);
	if (map_open < 0)
	{
		return (0);
	}
	a = (char *)malloc((10000000) * sizeof(char));
	map_read = read(map_open, a, 10000000);
	map = (char *)malloc((map_read + 1) * sizeof(char));
	i = 0;
	while (i < map_read)
	{
		map[i] = a[i];
		i++;
	}
	map[i] = '\0';
	free(a);
	close(map_open);
	return (map);
}

char	*read_map_nomal(void)
{
	char	*map;
	char	*a;
	int		map_read;
	int		i;

	a = (char *)malloc((10000000) * sizeof(char));
	map_read = read(0, a, 10000000);
	map = (char *)malloc((map_read + 1) * sizeof(char));
	i = 0;
	while (i < map_read)
	{
		map[i] = a[i];
		i++;
	}
	map[i] = '\0';
	free(a);
	return (map);
}
