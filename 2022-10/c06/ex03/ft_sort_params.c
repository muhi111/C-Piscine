/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:08:53 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/20 13:26:41 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		write(1, (str + count), 1);
		count++;
	}
}

void	ft_sort_tab(char **tab, int size)
{
	int	sort_count;
	int	count;
	int	i;

	sort_count = 1;
	while (sort_count != 0)
	{
		sort_count = 0;
		count = 1;
		while (count <= (size - 2))
		{
			i = 0;
			while (tab[count][i] != '\0' && tab[count + 1][i] != '\0'
				&& tab[count][i] == tab[count + 1][i])
				i++;
			if (tab[count][i] > tab[count + 1][i])
			{
				ft_swap(&tab[count], &tab[count + 1]);
				sort_count++;
			}
			count++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_sort_tab(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
