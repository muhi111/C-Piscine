/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:00:22 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/24 19:34:38 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int	print_search_digit(t_dict *dict, char *nbr)
{
	t_dict	*current_node;

	current_node = dict;
	while (current_node)
	{
		if (ft_strcmp(current_node->key, nbr) == 0)
		{
			ft_putstr(current_node->value);
			return (0);
		}
		current_node = current_node->next;
	}
	return (1);
}

int	print_double_digit(t_dict *dict, char *nbr)
{
	char	dight[3];

	while (*nbr == '0')
		nbr++;
	if (!*nbr)
		return (0);
	if (print_search_digit(dict, nbr) == 0)
		return (0);
	dight[0] = nbr[0];
	dight[1] = '0';
	dight[2] = 0;
	if (print_search_digit(dict, dight))
		return (1);
	return (2);
}

int	print_triple_dight(t_dict *dict, char *nbr)
{
	char	dight[2];

	if (nbr[0] == '0')
		return (0);
	dight[0] = nbr[0];
	dight[1] = '\0';
	if (print_search_digit(dict, dight))
		return (1);
	ft_putchar(' ');
	if (print_search_digit(dict, "100"))
		return (1);
	return (0);
}

int	print_block(t_dict *dict, char *nbr)
{
	int	return_value;

	if (ft_strlen(nbr) == 3)
	{
		if (print_triple_dight(dict, nbr))
			return (1);
		if (nbr[0] != '0' && (nbr[1] != '0' || nbr[2] != '0'))
			ft_putstr(" and ");
		nbr++;
	}
	if (ft_strlen(nbr) == 2)
	{
		return_value = print_double_digit(dict, nbr);
		if (return_value == 0)
			return (0);
		else if (return_value == 1)
			return (1);
		nbr++;
		ft_putchar('-');
	}
	if (print_search_digit(dict, nbr) == 0)
		return (0);
	return (1);
}

int	print_digit_name(t_dict *dict, int digit)
{
	char	*num;
	int		i;

	num = (char *)malloc(sizeof(char) * (digit + 2));
	num[0] = '1';
	i = 1;
	while (i <= digit)
	{
		num[i] = '0';
		i++;
	}
	num[i] = '\0';
	if (print_search_digit(dict, num))
	{
		free(num);
		return (1);
	}
	free(num);
	return (0);
}
