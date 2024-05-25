/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:11:55 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/24 14:11:57 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	free_block(char **block)
{
	int	i;

	i = 0;
	while (block[i] != NULL)
	{
		free(block[i]);
		i++;
	}
	free(block);
}

void	free_dict_list(t_dict *dict_list)
{
	t_dict	*temp;

	while (dict_list != NULL)
	{
		free(dict_list->key);
		free(dict_list->value);
		temp = dict_list->next;
		free(dict_list);
		dict_list = temp;
	}
}
