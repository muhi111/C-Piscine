/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taksaito <taksaito@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 03:56:07 by taksaito          #+#    #+#             */
/*   Updated: 2022/10/18 06:22:32 by taksaito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*c;
	int		src_len;
	int		i;

	src_len = ft_strlen(src);
	c = malloc(sizeof(char) * (src_len + 1));
	if (c == NULL)
		exit(12);
	i = 0;
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *c;
// 	c = ft_strdup("dup");
// 	printf("%s", c);
// }
