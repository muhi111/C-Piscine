/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwaki <rwaki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 06:55:45 by rwaki             #+#    #+#             */
/*   Updated: 2022/10/20 02:57:43 by rwaki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 2;
	j = 1;
	while (argc >= i)
	{
		write(1, argv[argc - j], ft_strlen(argv[argc - j]));
		write(1, "\n", 1);
		j++;
		i++;
	}
}
