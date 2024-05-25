/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:32:37 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/12 13:04:08 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
	{
		return (1);
	}
	return (0);
}

int	ft_atoi_sub(char *str, int sign)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 - (str[i] - '0');
			i++;
			continue ;
		}
		return (result * ((-1) * sign));
	}
	return (result * ((-1) * sign));
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (ft_is_space(str[i]))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = sign * (-1);
		}
		i++;
	}
	return (ft_atoi_sub(str + i, sign));
}

// #include <stdio.h>
// int main(void){
// 	char str[] = "\t\n\v\f  ---+--+2147483648ab567";
// 	printf("%d", ft_atoi(str));
// }