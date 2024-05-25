/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:48:20 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/23 09:15:06 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
void	set_func_pointer(void (*p[5])(int, int));

int	main(int argc, char *argv[])
{
	void	(*p[5])(int, int);

	set_func_pointer(p);
	if (argc != 4)
		return (1);
	if (ft_strcmp(argv[2], "+") == 0)
		p[0](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (ft_strcmp(argv[2], "-") == 0)
		p[1](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (ft_strcmp(argv[2], "*") == 0)
		p[2](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (ft_strcmp(argv[2], "/") == 0)
		p[3](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (ft_strcmp(argv[2], "%") == 0)
		p[4](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else
	{
		write(1, "0", 1);
		write(1, "\n", 1);
	}
}
