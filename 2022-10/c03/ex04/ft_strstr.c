/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:59:10 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/18 21:11:16 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0' && to_find[i] != '\0')
	{
		if (str[i] == to_find[i])
			j = 1;
		while (str[i + j] == to_find[i + j])
		{
			if (to_find[i + j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char s1[] = "abcdefghijklmn";     /* 検索対象文字列 */
// 	char s2[] = "defgh";              /* 一致する場合 */
// 	char s3[] = "xyz";                /* 一致しない場合 */
// 	char s4[] = "abcdefghijklmnopqr"; /* 検索対象文字列より長い場合 */
// 	char s5[] = "";                   /* \0 */
// 	char *sp;

// 	sp = strstr(s1, s2);
// 	printf("一致する場合 : %s\n", sp);
// 	sp = strstr(s1, s3);
// 	printf("一致しない場合 : %s\n", sp);
// 	sp = strstr(s1, s4);
// 	printf("検索対象文字列より長い場合 : %s\n", sp);
// 	sp = strstr(s1, s5);
// 	printf("\\0 : %s\n", sp);

// 	return (0);
// }