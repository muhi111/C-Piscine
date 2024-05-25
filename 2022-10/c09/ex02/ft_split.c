/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:00:20 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/28 14:00:27 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
		count++;
	return (count);
}

int	char_check(char a, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (a == charset[i])
			return (0);
		i++;
	}
	return (1);
}

void	split(char *str, char *charset, char **split_result)
{
	int	i;
	int	index;
	int	j;

	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (char_check(str[i], charset) == 0) //区切り文字なら
			i++;
		while (char_check(str[i], charset) == 1)
		{
			split_result[index][j] = str[i];
			j++;
			i++;
		}
		index++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**split_result;
	int		i;

	split_result = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	i = -1;
	while (++i < (ft_strlen(str) + 1))
		split_result = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (split_result == NULL)
		return (NULL);
	split(str, charset, split_result);
	return (split_result);
}

#include <stdio.h>
int	main(void)
{
	int index;
	char **split;

	split = ft_split("1,2,3,4", ",");

	index = 0;
	printf("tab start\n");
	while (split[index])
	{
		printf("tab[%d]: $%s$\n", index, split[index]);

		index++;
	}
	printf("tab end\n");
}