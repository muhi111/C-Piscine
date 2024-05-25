/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:48:22 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/28 22:07:34 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int		print_error(char **argv, int i);
int		ft_strcmp(char *s1, char *s2);
void	dislpy_std_input(void);
int		ft_disply_file(char *file_name);
void	ft_erorr_putstr(char *str);

int	main(int argc, char *argv[])
{
	int	i;
	int	flag;

	flag = 0;
	if (argc == 1)
		dislpy_std_input();
	else
	{
		i = 0;
		while (++i < argc)
		{
			if (ft_strcmp(argv[i], "-") == 0)
				dislpy_std_input();
			else
			{
				if (ft_disply_file(argv[i]))
				{
					print_error(argv, i);
					flag = 1;
				}
			}
		}
	}
	if (flag == 1)
		return (1);
}
