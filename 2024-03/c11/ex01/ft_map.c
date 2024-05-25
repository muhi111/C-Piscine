/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:45:06 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/21 16:56:46 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*result;

	result = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}

// int square(int i){
// 	return i * i;
// }

// #include <stdio.h>
// int main(void){
// 	int tab[] = {1,2,3,4,5,6,7,8,9};
// 	int *result = ft_map(tab, sizeof(tab)/sizeof(int), &square);
// 	for(long unsigned int i = 0;i<sizeof(tab)/sizeof(int);i++){
// 		printf("%d ", result[i]);
// 	}
// 	printf("\n");
// 	free(result);
// }