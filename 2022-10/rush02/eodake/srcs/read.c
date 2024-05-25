/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eodake <eodake@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:59:00 by eodake            #+#    #+#             */
/*   Updated: 2022/10/23 17:47:46 by eodake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++ != 0)
		i++;
	return (i);
}

void	ft_put_error(void)
{
	ft_putstr("Error\n");
}

void	ft_put_dicterror(void)
{
	ft_putstr("Dict Error\n");
}

int	ft_verify(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			ft_put_error();
			return (0);
		}
		i++;
	}
	return (1);
}
