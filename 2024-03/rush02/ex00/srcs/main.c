/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 08:46:15 by masayama          #+#    #+#             */
/*   Updated: 2024/03/24 16:44:34 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	ft_d_error(t_dict *dict_list)
{
	write(2, "Dict Error\n", 11);
	free_dict_list(dict_list);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
}

int	is_d_error(int argc, char **argv, t_dict *dict_list)
{
	char	*nbr_start;

	if (dict_list == NULL)
		return (1);
	if (!is_sucsses_nbr(argv[argc - 1], &nbr_start))
		return (2);
	if (nbr_to_text(dict_list, nbr_start))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	t_dict	*dict_list;
	int		return_value;

	if (!(argc == 2 || argc == 3))
	{
		ft_error();
		return (1);
	}
	dict_list = load_file(argc, argv);
	return_value = is_d_error(argc, argv, dict_list);
	if (return_value == 1)
	{
		ft_d_error(dict_list);
		return (1);
	}
	else if (return_value == 2)
	{
		free_dict_list(dict_list);
		ft_error();
		return (1);
	}
	free_dict_list(dict_list);
}
