/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 02:57:52 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/20 03:30:50 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int	check_char(char str)
// {
// 	if (str == ' ' || str == '\t' || str == '\v' || str == '\n' || str == '\r'
// 		|| str == '\f')
// 		return (0);
// 	else if (str == '+')
// 		return (1);
// 	else if (str == '-')
// 		return (2);
// 	else if (str >= '1' && str <= '9')
// 		return (3);
// 	else
// 		return (4);
// }

// int convert_num(int i, char *str)
// {
// 	int j;
// 	int num;


// 	j = 0;
// 	while (check_char(str[i+1+j])!=4)
// 		j++;

// }

// int	ft_atoi(char *str)
// {
// 	int count;
// 	int i;
// 	int num;

// 	count = 0;
// 	i = 0;
// 	num = 0;
// 	while (check_char(str[i]) != 3 && )
// 	{
// 		if (check_char(str[i]) == 0)
// 			i++;
// 		else if (check_char(str[i])==1 || check_char((str[i])==2)
// 			if (check_char(str[i]==2))
// 				count++;
// 			if (check_char(str[i+1])==3)
// 				num = ~~~~~;
// 		i++;
// 	}
// 	if (count % 2 == 1)
// 		num = num *(-1);
// 	return (num);
// }