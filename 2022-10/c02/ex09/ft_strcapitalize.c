/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:19:27 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/18 12:56:36 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_char(char str)
{
	if (str >= 'a' && str <= 'z')
		return (0);
	else if (str >= 'A' && str <= 'Z')
		return (1);
	else if (str >= '0' && str <= '9')
		return (2);
	else
		return (3);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && check_char(str[0]) == 0)
			str[0] = str[0] - 32;
		else if (i != 0 && check_char(str[i - 1]) == 3
			&& check_char(str[i]) == 0)
			str[i] = str[i] - 32;
		else if (i != 0 && check_char(str[i - 1]) != 3
			&& check_char(str[i]) == 1)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int        main(void)
// {
//     char str1[]="salut, comment tu vas ? 42mots qu-deux; cinquante+et+un";
//     char str2[]=" sALuT, ComMenT tu VAS ? 42Mots QU-deUX; cinQuantE+ET+un";
//     char empty[] = "";

//     printf("\n-----\nBEF = %s", str1);
//     printf("\nAFT = %s\n", ft_strcapitalize(str1));
//     printf("\nBEF = %s", str2);
//     printf("\nAFt = %s\n", ft_strcapitalize(str2));
//     printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));

// }