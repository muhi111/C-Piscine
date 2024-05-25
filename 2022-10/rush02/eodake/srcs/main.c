/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eodake <eodake@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:00:48 by eodake            #+#    #+#             */
/*   Updated: 2022/10/23 17:39:20 by eodake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

//#include<stdio.h>
//void ft_search(char *src,t_dict *dict)
//{
//	int i;

//	printf("number: %s\n", src);
//	i = 0;
//	while (i < 41)
//	{
//		printf("%d key: %s word: %s\n",i,dict[i].key, dict[i].word);
//		i++;
//	}
//	return ;
//}

int	main_sub(int argc, char **argv)
{
	char	*src;
	int		i;
	int		j;
	t_dict	*dict;

	dict = (t_dict *)malloc(sizeof(t_dict) * 100);
	if (argc == 2)
	{
		i = ft_to_dict("numbers.dict", dict);
		src = argv[1];
	}
	else if (argc == 3)
	{
		i = ft_to_dict(argv[1], dict);
		src = argv[2];
	}
	j = ft_verify(src);
	if (j == 0 || i == 0)
		return (0);
	ft_search(src, dict);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
		ft_put_error();
	else
		main_sub(argc, argv);
	return (0);
}
