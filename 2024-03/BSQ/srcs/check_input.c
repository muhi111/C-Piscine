/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 06:55:57 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/27 11:46:43 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	is_valid_character(char a, char b, char c)
{
	if (a == b || a == c || b == c)
		return (0);
	if (32 <= a && a <= 126 && 32 <= b && b <= 126 && 32 <= c && c <= 126)
		return (1);
	else
		return (0);
}

int	is_valid_map_char(char c, char empty, char obstacle)
{
	if (c == empty || c == obstacle)
		return (1);
	return (0);
}

int	valid_basic(char *str, int *i)
{
	int	char_index;

	if (my_atoi(str) <= 0)
		return (0);
	while (str[*i] >= '0' && str[*i] <= '9' && str[*i + 3] != '\n')
		(*i)++;
	if (!is_valid_character(str[*i], str[*i + 1], str[*i + 2]))
		return (0);
	char_index = *i;
	*i += 3;
	return (char_index);
}

int	valid_first_line(char *str, int *i, int char_index)
{
	int	col_len;

	col_len = 0;
	if (str[(*i)++] != '\n')
		return (0);
	while (str[*i] != '\n' && str[*i] != '\0')
	{
		if (!is_valid_map_char(str[*i], str[char_index], str[char_index + 1]))
			return (0);
		col_len++;
		(*i)++;
	}
	if (str[(*i)++] != '\n')
		return (0);
	return (col_len);
}

int	valid_remaining(char *str, int *i, int char_index, int col_len)
{
	int	line_len;
	int	j;

	line_len = 1;
	while (str[*i] != '\0')
	{
		j = 0;
		while (str[*i] != '\n' && str[*i] != '\0')
		{
			if (!is_valid_map_char(str[*i], str[char_index], str[char_index
						+ 1]))
				return (0);
			j++;
			(*i)++;
		}
		if (str[(*i)++] != '\n' || j != col_len)
			return (0);
		line_len++;
	}
	return (line_len);
}
