/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:59:06 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/18 21:07:19 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (i <= ft_strlen(src))
	{
		dest[ft_strlen(dest) + i] = src[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str1[30] = "ABC";
//     char str2[] = "123";
//     char *p = "abcd";

//     strcat(str1, str2);     /* 文字型配列に文字型配列を連結 */
//     printf("%s\n", str1);

//     strcat(str1, p);        /* 文字型配列にポインタの指す文字列リテラルを連結 */
//     printf("%s\n", str1);

//     strcat(str1, "xyz");    /* 文字型配列に文字列リテラルを連結 */
//     printf("%s\n", str1);

//     return (0);
// }