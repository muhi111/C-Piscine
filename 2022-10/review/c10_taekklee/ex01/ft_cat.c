/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taekklee <taekklee@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:22:49 by taekklee          #+#    #+#             */
/*   Updated: 2022/10/21 22:04:51 by taekklee         ###   ########.fr       */
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
int		ft_handle_file(char *path, char *buf);
void	ft_output_file(char *s, int sz);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	int		i;
	char	buf[BUF_SIZE];

	if (argc == 1)
		ft_handle_file("-", buf);
	i = 1;
	while (i < argc)
	{
		if (ft_handle_file(argv[i], buf) == -1)
			ft_putstr_nl(argv[i], strerror(errno), basename(argv[0]));
		++i;
	}
	return (0);
}

int	ft_handle_file(char *path, char *buf)
{
	int	sz;
	int	fd;

	if (ft_strcmp(path, "-") == 0)
		fd = STDIN;
	else
		fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	sz = 0;
	while (1)
	{
		sz = read(fd, buf, BUF_SIZE);
		if (sz == -1)
			return (-1);
		if (sz == 0)
			break ;
		ft_output_file(buf, sz);
	}
	if (fd != STDIN)
		close(fd);
	return (0);
}

void	ft_output_file(char *s, int sz)
{
	write(STDOUT, s, sz);
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
