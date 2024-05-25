/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:12:57 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/23 09:34:57 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) == 0)
		{
			i++;
			continue ;
		}
		else if (f(tab[i], tab[i + 1]) > 0 && flag >= 0)
			flag = 1;
		else if (f(tab[i], tab[i + 1]) < 0 && flag <= 0)
			flag = -1;
		else
			return (0);
		i++;
	}
	return (1);
}

// int	num_cmp(int a, int b){
// 	if (a == b){
// 		return 0;
// 	}else if (a < b){
// 		return -1;
// 	}else{
// 		return 1;
// 	}
// }

// #include <stdio.h>
// int main(void){
// 	int tab[] = {1,1,1};
// 	printf("%d\n", ft_is_sort(tab, sizeof(tab)/sizeof(int), &num_cmp));
// }
