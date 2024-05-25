/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwaki <rwaki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 06:55:48 by rwaki             #+#    #+#             */
/*   Updated: 2022/10/20 04:36:30 by rwaki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char *a, char *b)
{
	char	i;

	i = *a;
	*a = *b;
	*b = i;
}

char	ft_sort_int_tab(char *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = size - 2;
		while (j >= i)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j--;
		}
		i++;
	}
	return (*tab);
}

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
		*argv[argc] = ft_sort_int_tab(*argv, argc);
		write(1, argv[j], ft_strlen(argv[j]));
		write(1, "\n", 1);
		j++;
		i++;
	}
}
