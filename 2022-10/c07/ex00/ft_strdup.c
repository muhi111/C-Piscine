/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:30:24 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/22 20:19:07 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*a;

	a = (char *)malloc(sizeof(char) * ft_strlen(src)+1);
	if (a == NULL)
		return (NULL);
	ft_strcpy(a, src);
	return (a);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *str1 = "Hello World!";
// 	char *str2;

// 	str2 = ft_strdup(str1);
// 	printf("%p, %p\n", str1, str2);
// 	printf("%s\n", str2);
// 	free(str2);
// 	return (0);
// }