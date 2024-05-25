/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:52:31 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/23 09:25:00 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (tab[i] != NULL)
	{
		j = 0;
		while (tab[j + 1] != NULL)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

// #include <stdio.h>
// int main(void){
// 	char *strs[] = {"abce", "abc", "ab", "aa", "abcde", "bbb", 0};
// 	for (int i = 0;strs[i]!=NULL;i++){
// 		printf("%s ", strs[i]);
// 	}
// 	printf("\n");
// 	ft_sort_string_tab(strs);
// 	for (int i = 0;strs[i]!=NULL;i++){
// 		printf("%s ", strs[i]);
// 	}
// 	printf("\n");
// }