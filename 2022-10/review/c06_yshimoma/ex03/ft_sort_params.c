/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:27:42 by yshimoma          #+#    #+#             */
/*   Updated: 2022/10/20 13:12:16 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** *a と *b の値を入れ替える
*/
void	ft_swap(int *a, int *b)
{
	int	num1;

	num1 = *a;
	*a = *b;
	*b = num1;
}

/*
** 文字列s1と文字列s2を比較します。
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
** ASCII昇順か判断する関数を呼ぶ。ASCII昇順でなければアドレスを入れ替える
** ASCII昇順に並んだものを出力
*/
int	main(int argc, char *argv[])
{
	int		i;
	int		j;

	if (argc < 1)
		return (1);
	i = 0;
	while (++i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap((int *)&argv[i], (int *)&argv[j]);
			j++;
		}
	}
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j] != '\0')
			write(1, &argv[i][j], 1);
		write(1, "\n", 1);
	}
	return (0);
}
