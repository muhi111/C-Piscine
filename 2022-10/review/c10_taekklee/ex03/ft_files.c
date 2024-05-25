/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taekklee <taekklee@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:59:02 by taekklee          #+#    #+#             */
/*   Updated: 2022/10/21 22:08:34 by taekklee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/errno.h>

#define STDIN (0)
#define STDOUT (1)
#define STDERR (2)
#define BUF_SIZE (30000)

int		ft_open_file(char *path, int *p_fd);
int		ft_handle_file(char *path, char *buf);
void	ft_output_file(char *s, int from, int to, int is_first);
void	ft_output_last_line(char *s, int i, int end);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_print_row(char *s, int from, int end);
void	int_as_hex(int n, int d);

int	ft_open_file(char *path, int *p_fd)
{
	if (ft_strcmp(path, "") == 0)
		*p_fd = STDIN;
	else
		*p_fd = open(path, O_RDONLY);
	return (*p_fd);
}

int	ft_handle_file(char *path, char *buf)
{
	int	crr;
	int	end;
	int	add;
	int	fd;

	if (ft_open_file(path, &fd) == -1)
		return (-1);
	end = 0;
	crr = 0;
	while (1)
	{
		add = read(fd, buf + end, BUF_SIZE);
		if (add == -1)
			return (-1);
		if (add == 0)
			break ;
		end += add;
		ft_output_file(buf, crr, end, 1);
		crr = end - end % 16;
	}
	ft_output_last_line(buf, crr, end);
	if (fd != STDIN)
		close(fd);
	return (0);
}

void	ft_output_file(char *s, int from, int to, int is_first)
{
	if (from + 16 > to)
		return ;
	if (!is_first && ft_strncmp(s + from - 16, s + from, 16) == 0)
	{
		ft_putstr("*\n");
		while (from + 16 <= to && ft_strncmp(s + from, s + from + 16, 16) == 0)
			from += 16;
	}
	else
		ft_print_row(s, from, to);
	ft_output_file(s, from + 16, to, 0);
	return ;
}

void	ft_output_last_line(char *s, int i, int end)
{
	if (end == 0)
		return ;
	if (i < end)
		ft_print_row(s, i, end);
	int_as_hex(end, 7);
	ft_putchar('\n');
}
