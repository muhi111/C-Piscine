/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:53:31 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/18 13:01:54 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count ++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (ft_strlen(src) >= n)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else if (ft_strlen(src) < n)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int    main()
// {
//     char src[100] = "1234567";
//     char dest[100] = "abcdefghijk";
//     char dest1[100] = "abcdefghijk";

//     printf("%s", ft_strncpy(dest, src, 3));
//     printf("\n%s", strncpy(dest1, src, 3));
//     printf("\n%s", ft_strncpy(dest, src, 7));
//     printf("\n%s", strncpy(dest1, src, 7));
//     printf("\n%s", ft_strncpy(dest, src, 10));
//     printf("\n%s", strncpy(dest1, src, 10));
// return 0;
// }