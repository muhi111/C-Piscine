/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 09:51:18 by masayama          #+#    #+#             */
/*   Updated: 2024/03/23 21:38:19 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

t_dict	*load_file(int argc, char *argv[])
{
	char	*buf;

	if (argc == 2)
		buf = read_file(DEFAULT_DICT);
	else if (argc == 3)
		buf = read_file(argv[1]);
	else
		return (NULL);
	if (buf == NULL)
		return (NULL);
	return (buf_to_struct(buf));
}

t_dict	*line_to_struct(char *line, t_dict *current)
{
	int		i;
	int		prev;
	t_dict	*next_node;

	i = 0;
	prev = 0;
	next_node = (t_dict *)malloc(sizeof(t_dict) * 1);
	next_node->next = current;
	while (line[i] != ' ' && line[i] != ':')
		i++;
	next_node->key = ft_strndup(line, i - prev);
	while (line[i] == ' ')
		i++;
	i++;
	while (line[i] == ' ')
		i++;
	prev = i;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	next_node->value = ft_strndup(line + prev, i - prev);
	return (next_node);
}

t_dict	*buf_to_struct(char *buf)
{
	int		i;
	t_dict	*current;

	i = 0;
	current = NULL;
	while (buf[i] != '\0')
	{
		if (buf[i] == '\n')
		{
			i++;
			continue ;
		}
		else
		{
			current = line_to_struct(buf + i, current);
		}
		while (buf[i] != '\n' && buf[i] != '\0')
			i++;
	}
	free(buf);
	return (current);
}

char	*read_file(char *dict_name)
{
	int		fd;
	int		file_size;
	char	*buf;

	file_size = get_file_size(dict_name);
	if (file_size == -1)
		return (NULL);
	fd = open(dict_name, O_RDONLY);
	if (fd == -1)
		return (NULL);
	buf = (char *)malloc(sizeof(char) * (file_size + 1));
	read(fd, buf, file_size);
	close(fd);
	buf[file_size] = '\0';
	return (buf);
}

int	get_file_size(char *dict_name)
{
	char	buf;
	int		fd;
	int		count;

	fd = open(dict_name, O_RDONLY);
	if (fd == -1)
		return (-1);
	count = 0;
	while (read(fd, &buf, 1))
		count++;
	close(fd);
	return (count);
}
