/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akamite <akamite@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:19:55 by akamite           #+#    #+#             */
/*   Updated: 2024/03/17 21:48:58 by akamite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		**get_viewpoint(int argc, char *argv[]);
void	free_board(int **points, int n);
void	print_error(void);
int		rush(int **look);

int	main(int argc, char *argv[])
{
	int	**look;
	int	iserr;

	look = get_viewpoint(argc, argv);
	if (look != NULL)
	{
		iserr = rush(look);
		free_board(look, 5);
		return (iserr);
	}
	else
	{
		print_error();
		free_board(look, 5);
		return (1);
	}
	return (0);
}
