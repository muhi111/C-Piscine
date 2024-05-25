/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:37:59 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/26 22:08:17 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**handle_map(char *raw_map, char string[4], int size[2])
{
	int		i;
	char	**board;
	int		start;

	start = size_input(raw_map, size);
	i = -1;
	while (++i < 3)
	{
		if (start != 0 && raw_map[start - i - 1] >= 32 && raw_map[start - i
				- 1] <= 126)
			string[2 - i] = raw_map[start - i - 1];
		else
			return (0);
	}
	if (string[0] == string[1] || string[0] == string[2]
		|| string[1] == string[2])
		return (0);
	string[i] = '\0';
	board = (char **)malloc(sizeof(char *) * size[0]);
	i = -1;
	while (++i < size[0])
		board[i] = malloc(sizeof(char) * size[1]);
	if (gen_map(raw_map, string, size, board) == 0)
		return (0);
	return (board);
}
