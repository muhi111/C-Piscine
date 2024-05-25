/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_to_text.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 02:53:09 by masayama          #+#    #+#             */
/*   Updated: 2024/03/24 20:57:00 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int	block_size_count(char *nbr)
{
	int	res;

	res = ft_strlen(nbr) / 3;
	if (ft_strlen(nbr) % 3 != 0)
		res++;
	return (res);
}

char	**split_nbr(char *nbr, int block_size)
{
	char	**block;
	int		i;
	int		j;

	block = (char **)malloc(sizeof(char *) * (block_size + 1));
	i = 0;
	j = 0;
	while (nbr[i] != 0 && j < block_size)
	{
		if ((ft_strlen(nbr) - i) % 3 != 0)
		{
			block[j] = ft_strndup(nbr, ft_strlen(nbr) % 3);
			i += ft_strlen(nbr) % 3;
		}
		else
		{
			block[j] = ft_strndup(nbr + i, 3);
			i += 3;
		}
		j++;
	}
	block[j] = NULL;
	return (block);
}

int	is_block_zero(char *line)
{
	if (ft_strlen(line) == 3)
	{
		if (line[0] == '0' && line[1] == '0' && line[2] == '0')
		{
			return (1);
		}
	}
	return (0);
}

int	nbr_to_text_helper(t_dict *dict, char **block, int block_size)
{
	int	i;

	i = 0;
	while (block[i])
	{
		if (i > 0 && !is_block_zero(block[i]))
			ft_putchar(' ');
		if (print_block(dict, block[i]))
			return (1);
		if (block_size - 1 > i && !is_block_zero(block[i]))
		{
			ft_putchar(' ');
			if (print_digit_name(dict, (block_size - 1 - i) * 3))
				return (1);
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}

int	nbr_to_text(t_dict *dict, char *nbr)
{
	char	**block;
	int		block_size;

	block_size = block_size_count(nbr);
	block = split_nbr(nbr, block_size);
	if (ft_strlen(nbr) == 1 && nbr[0] == '0')
	{
		if (print_search_digit(dict, nbr))
		{
			free_block(block);
			return (1);
		}
		ft_putchar('\n');
		free_block(block);
		return (0);
	}
	if (nbr_to_text_helper(dict, block, block_size))
	{
		free_block(block);
		return (1);
	}
	free_block(block);
	return (0);
}
