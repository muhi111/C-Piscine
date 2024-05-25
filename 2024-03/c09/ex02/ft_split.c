/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:10:02 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/21 02:31:19 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_much_charset(char c, char *charset)
{
	int	j;

	j = 0;
	while (charset[j] != '\0')
	{
		if (c == charset[j])
		{
			return (1);
		}
		j++;
	}
	return (0);
}

int	count_split_num(char *str, char *charset)
{
	int	i;
	int	result;
	int	flag;

	result = 0;
	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (is_much_charset(str[i], charset))
		{
			if (flag == 0)
			{
				result++;
				flag = 1;
			}
		}
		else
		{
			flag = 0;
		}
		i++;
	}
	return (result + 1);
}

char	*ft_strndup(char *src, int n)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(sizeof(char) * (n + 1));
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_split_sub(char *str, char *charset, char **split)
{
	int	i;
	int	j;
	int	prev_index;

	i = 0;
	j = 0;
	prev_index = -1;
	while (str[i] != '\0')
	{
		if (is_much_charset(str[i], charset))
		{
			if (i - prev_index - 1 > 0)
			{
				split[j] = ft_strndup(str + prev_index + 1, i - prev_index - 1);
				j++;
			}
			prev_index = i;
		}
		i++;
	}
	if (i - prev_index - 1 > 0)
		split[j++] = ft_strndup(str + prev_index + 1, i - prev_index - 1);
	split[j] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**split;

	split = malloc(sizeof(char *) * (count_split_num(str, charset) + 1));
	ft_split_sub(str, charset, split);
	return (split);
}

// #include <stdio.h>
// int main(void){
// 	char *str = "abcdefavg";
// 	char *charset = "abcdefg";
// 	char **split = ft_split(str, charset);
// 	int i;
// 	for(i = 0;split[i] != NULL;i++){
// 		printf("%s\n", split[i]);
// 		free(split[i]);
// 	}
// 	free(split[i]);
// 	free(split);
// }