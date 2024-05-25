/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:59:08 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/18 21:08:16 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
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
	unsigned int	i;

	i = 0;
	while (i <= ft_strlen(src))
	{
		dest[ft_strlen(dest) + i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	if (ft_strlen(src) < nb)
	{
		ft_strcat(dest, src);
		return (dest);
	}
	else
	{
		while (i <= nb)
		{
			dest[ft_strlen(dest) + i] = src[i];
			i++;
		}
		return (dest);
	}
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str1[20] = "ABC";
// 	char str2[] = "12345";

// 	strncat(str1, str2, 3); /* str2の長さ >= n */
// 	printf("%s\n", str1);
// 	strncat(str1, str2, 10); /* str2の長さ < n */
// 	printf("%s\n", str1);

// 	return (0);
// }