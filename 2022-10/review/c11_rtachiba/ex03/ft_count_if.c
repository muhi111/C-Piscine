/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtachiba <rtachiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:53:28 by rtachiba          #+#    #+#             */
/*   Updated: 2022/10/21 18:21:21 by rtachiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_abc_check(char *str)
// {
// 	if (str[0] == 'a' && str[1] == 'b' && str[2] == 'c')
// 		return (1);
// 	return (0);
// }

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	str;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		str = f(tab[i]);
		if (str != 0)
		{
			count++;
		}
		i++;
	}
	return (count);
}

// int	main(void)
// {
// 	char	*tab[3];

// 	tab[0] = "abc";
// 	tab[1] = "111";
// 	tab[2] = NULL;
// 	printf("%d\n", ft_count_if(tab, 3, &ft_abc_check));
// 	return (0);
// }
