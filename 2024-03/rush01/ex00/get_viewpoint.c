/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_viewpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akamite <akamite@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:15:26 by akamite           #+#    #+#             */
/*   Updated: 2024/03/17 20:39:40 by akamite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**allocate_board(int y, int x);

int	is_valid_num(char str, int size)
{
	if (str >= '1' && str <= size + '0')
		return (1);
	return (0);
}

int	get_row_size(char *str)
{
	int	strlen;
	int	size;

	strlen = 0;
	while (str[strlen])
		strlen++;
	if ((strlen + 1) / 2 % 4 != 0)
		return (-1);
	size = (strlen + 1) / 2 / 4;
	if (strlen != (size * 4 * 2) - 1)
		return (-1);
	return (size);
}

int	is_params_error(int argc, char *str)
{
	int	i;
	int	size;

	if (!str || argc != 2)
		return (-1);
	size = get_row_size(str);
	if (size == -1 || size > 9)
		return (-1);
	i = 0;
	while (str[i])
	{
		if (i % 2 == 0 && !is_valid_num(str[i], size))
			return (-1);
		if (i % 2 == 1 && str[i] != ' ')
			return (-1);
		i++;
	}
	return (size);
}

int	**get_viewpoint(int argc, char *argv[])
{
	char	*params;
	int		i;
	int		numi;
	int		**look;
	int		size;

	params = argv[1];
	size = is_params_error(argc, params);
	if (size == -1)
		return (NULL);
	look = allocate_board(5, size);
	if (look == NULL)
		return (NULL);
	numi = 0;
	i = -1;
	while (params[++i])
	{
		if (is_valid_num(params[i], size))
		{
			look[numi / size][numi % size] = params[i] - '0';
			numi++;
		}
	}
	look[4][0] = size;
	return (look);
}
