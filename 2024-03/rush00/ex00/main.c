/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:41:38 by aymatsub          #+#    #+#             */
/*   Updated: 2024/03/10 23:39:01 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			rush(int x, int y);
long long		my_atoi(char *str);

int	main(int argc, char *argv[])
{
	int	width;
	int	height;

	if (argc != 3)
	{
		write(2, "Error!:The number of arguments is not appropriate.\n", 51);
		return (1);
	}
	width = my_atoi(argv[1]);
	height = my_atoi(argv[2]);
	if ((width == 0) || (height == 0))
	{
		write(2, "Error!:Please enter 1 ~ 2147483647.\n", 36);
		return (1);
	}
	rush(width, height);
	return (0);
}

long long	my_atoi(char *str)
{
	long long	result;
	int			i;

	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (i >= 10)
		{
			return (0);
		}
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (result > 2147483647)
	{
		return (0);
	}
	return (result);
}
