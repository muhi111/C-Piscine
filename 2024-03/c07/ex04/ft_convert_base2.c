/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 22:50:21 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/21 11:48:46 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check(char *base);
int	ft_strlen(char *str);
int	ft_atoi_base(char *str, char *base);

void	string_rev(char *str, int start, int end)
{
	int		i;
	char	temp;

	i = 0;
	while (i < (end - start + 1) / 2)
	{
		temp = str[start + i];
		str[start + i] = str[end - i];
		str[end - i] = temp;
		i++;
	}
}

void	ft_putstr_base(long long nb, char *base_to, char *result)
{
	int		i;
	int		base_num;
	int		start;

	i = 0;
	start = 0;
	if (nb < 0)
	{
		result[0] = '-';
		nb = nb * (-1);
		i++;
		start = 1;
	}
	base_num = ft_strlen(base_to);
	while (nb > 0)
	{
		result[i] = base_to[nb % base_num];
		nb = nb / base_num;
		i++;
	}
	result[i] = '\0';
	string_rev(result, start, i - 1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*result;
	long long	nbr_long;

	if (check(base_from) || check(base_to))
		return (NULL);
	nbr_long = (long long)ft_atoi_base(nbr, base_from);
	result = (char *)malloc(sizeof(char) * 34);
	if (nbr_long == 0)
	{
		result[0] = base_to[0];
		result[1] = '\0';
		return (result);
	}
	ft_putstr_base(nbr_long, base_to, result);
	return (result);
}

// #include <stdio.h>
// int main(void){
// 	char *nbr = "\t\n\v\f -+-+-2147483648a2374";
// 	char *base_from = "0123456789";
// 	char *base_to = "0123456789";
// 	char *result = ft_convert_base(nbr, base_from, base_to);
// 	if (result == NULL){
// 		printf("error\n");
// 		return 1;
// 	}
// 	printf("%s\n", result);
// 	free(result);
// }
