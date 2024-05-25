/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 00:39:46 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/27 11:46:48 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	buf_to_struct(char *str, t_mapinf *map)
{
	int	i;
	int	j;
	int	prev_index;

	i = 0;
	j = 0;
	map->rows = my_atoi(str);
	map->matrix = (char **)malloc(sizeof(char *) * map->rows);
	while (str[i] >= '0' && str[i] <= '9' && str[i + 3] != '\n')
		i++;
	map->empty = str[i++];
	map->obstacle = str[i++];
	map->full = str[i++];
	prev_index = i;
	i++;
	while (str[i] != '\0')
	{
		while (str[i] != '\n')
			i++;
		map->matrix[j] = ft_strndup(str + prev_index + 1, i - prev_index - 1);
		map->columns = i - prev_index - 1;
		prev_index = i;
		j++;
		i++;
	}
}

int	read_file(char *file_name, t_mapinf *map)
{
	int		fd;
	char	*buf;

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		return (1);
	buf = read_input(fd);
	close(fd);
	if (buf == NULL)
		return (1);
	buf_to_struct(buf, map);
	free(buf);
	return (0);
}

int	read_stdin(t_mapinf *map)
{
	char	*buf;

	buf = read_input(0);
	if (buf == NULL)
		return (1);
	buf_to_struct(buf, map);
	free(buf);
	return (0);
}

char	*read_input(int fd)
{
	char	buf[BUFF_SIZE + 1];
	char	*catted_str;
	int		return_value;

	return_value = BUFF_SIZE;
	catted_str = (char *)malloc(sizeof(char) * 1);
	catted_str[0] = '\0';
	while (1)
	{
		return_value = read(fd, buf, BUFF_SIZE);
		if (return_value <= 0)
			break ;
		buf[return_value] = '\0';
		catted_str = ft_double_realloc(catted_str);
		ft_strcat(catted_str, buf);
	}
	if (return_value < 0 || !is_valid_input(catted_str))
	{
		free(catted_str);
		return (NULL);
	}
	return (catted_str);
}

int	is_valid_input(char *str)
{
	int	i;
	int	char_index;
	int	col_len;
	int	line_len;

	i = 0;
	char_index = valid_basic(str, &i);
	if (char_index == 0)
		return (0);
	col_len = valid_first_line(str, &i, char_index);
	if (col_len == 0)
		return (0);
	line_len = valid_remaining(str, &i, char_index, col_len);
	if (line_len != my_atoi(str))
		return (0);
	return (1);
}
