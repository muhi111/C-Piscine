/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:02:00 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/07 15:56:12 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	check(char *str, int i)
{
	if (i == 0)
	{
		return (1);
	}
	else if (!ft_char_is_alpha(str[i - 1]))
	{
		if (str[i - 1] >= '0' && str[i - 1] <= '9')
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && check(str, i))
		{
			str[i] = str[i] - 'a' + 'A';
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && !check(str, i))
		{
			str[i] = str[i] - 'A' + 'a';
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void){
// 	char str[] = "salut, comment tu vas ? 42mots 
// quarante-deux; cinquante+et+un";
// 	printf("before          : %s\n", str);
// 	printf("expected output : Salut, Comment Tu Vas ? 42mots 
// Quarante-Deux; Cinquante+Et+Un\n");
// 	printf("actual output   : %s\n", ft_strcapitalize(str));
// }
