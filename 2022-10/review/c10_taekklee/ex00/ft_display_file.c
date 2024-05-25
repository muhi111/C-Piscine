/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taekklee <taekklee@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:25:20 by taekklee          #+#    #+#             */
/*   Updated: 2022/10/20 11:38:53 by taekklee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define STDOUT (1)
#define STDERR (2)
#define ERRMSG_NO_ARGS ("File name missing.\n")
#define ERRMSG_TOO_MANY_ARGS ("Too many arguments.\n")
#define ERRMSG_FAIL_READ_FILE ("Cannot read file.\n")
#define BUF_SIZE (10)

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr(char *str, int fd)
{
	while (*str != '\0')
	{
		ft_putchar(*str, fd);
		++str;
	}
}

void	ft_read_file(int fd)
{
	int		cnt;
	char	buf[BUF_SIZE];

	while (1)
	{
		cnt = read(fd, buf, BUF_SIZE);
		if (cnt == 0)
			break ;
		write(STDOUT, buf, cnt);
	}
}

int	main(int argc, char *argv[])
{
	int	fd;

	if (argc <= 1)
		ft_putstr(ERRMSG_NO_ARGS, STDERR);
	else if (argc > 2)
		ft_putstr(ERRMSG_TOO_MANY_ARGS, STDERR);
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr(ERRMSG_FAIL_READ_FILE, STDERR);
			return (0);
		}
		ft_read_file(fd);
		close(fd);
	}
	return (0);
}
