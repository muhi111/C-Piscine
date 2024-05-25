/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taekklee <taekklee@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:11:46 by taekklee          #+#    #+#             */
/*   Updated: 2022/10/21 22:06:45 by taekklee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/errno.h>
#include <libgen.h>

#define PROGRAM ("hexdump")
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

	if (argc == 2)
		ft_handle_file("", buf);
	i = 2;
	while (i < argc)
	{
		if (ft_handle_file(argv[i], buf) == -1)
			ft_putstr_nl(argv[i], strerror(errno), basename(argv[0]));
		++i;
	}
	return (0);
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
