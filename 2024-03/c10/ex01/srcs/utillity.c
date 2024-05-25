/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utillity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:41:21 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/28 22:07:43 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>

void	ft_erorr_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(2, &str[i], 1);
		i++;
	}
}

int	ft_disply_file(char *file_name)
{
	int		fd;
	char	buff;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (1);
	while (read(fd, &buff, 1) == 1)
		write(1, &buff, 1);
	close(fd);
	return (0);
}

void	dislpy_std_input(void)
{
	char	buff;

	while (read(0, &buff, 1) == 1)
	{
		write(1, &buff, 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	print_error(char **argv, int i)
{
	ft_erorr_putstr(basename(argv[0]));
	ft_erorr_putstr(": ");
	ft_erorr_putstr(argv[i]);
	ft_erorr_putstr(": ");
	ft_erorr_putstr(strerror(errno));
	ft_erorr_putstr("\n");
}
