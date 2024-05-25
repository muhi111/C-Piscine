/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taekklee <taekklee@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:38:35 by taekklee          #+#    #+#             */
/*   Updated: 2022/10/21 22:07:15 by taekklee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/errno.h>
#include <libgen.h>

#define STDIN (0)
#define STDOUT (1)
#define STDERR (2)
#define BUF_SIZE (30000)

void	ft_putstr_nl(char *path, char *msg, char *bn);
int		ft_handle_file(char *path, char *buf, int nc, int header);
void	ft_output_header(char *path, int header);
void	ft_output_file(char *s, int sz, int nc);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	int		i;
	int		nc;
	int		success;
	char	buf[BUF_SIZE];

	if (argc < 3)
		return (0);
	nc = ft_atoi(argv[2]);
	if (argc == 3)
		ft_handle_file("", buf, nc, 0);
	success = 0;
	i = 3;
	while (i < argc)
	{
		if (ft_handle_file(argv[i], buf, nc, (argc > 4) + success) == -1)
			ft_putstr_nl(argv[i], strerror(errno), argv[0]);
		else
			success = 1;
		++i;
	}
	return (0);
}

int	ft_handle_file(char *path, char *buf, int nc, int header)
{
	int	sz;
	int	add;
	int	fd;

	if (ft_strcmp(path, "") == 0)
		fd = STDIN;
	else
		fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	sz = 0;
	while (1)
	{
		add = read(fd, buf, BUF_SIZE);
		if (add == -1)
			return (-1);
		if (add == 0)
			break ;
		sz = add;
	}
	if (fd != STDIN)
		close(fd);
	ft_output_header(path, header);
	ft_output_file(buf, sz, nc);
	return (0);
}

void	ft_output_header(char *path, int header)
{
	if (header > 0)
	{
		if (header > 1)
			ft_putchar('\n');
		ft_putstr("==> ");
		ft_putstr(path);
		ft_putstr(" <==");
		ft_putchar('\n');
	}
}

void	ft_output_file(char *s, int sz, int nc)
{
	if (sz < nc)
	{
		write(STDOUT, s + (BUF_SIZE - (nc - sz)), (nc - sz));
		nc = sz;
	}
	else
		write(STDOUT, s + (sz - nc), nc);
}

void	ft_putstr_nl(char *path, char *msg, char *bn)
{
	ft_putstr(bn);
	ft_putstr(": ");
	ft_putstr(path);
	ft_putstr(": ");
	ft_putstr(msg);
	ft_putchar('\n');
}
