/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 23:08:31 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/19 09:00:30 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = min;
	while (i < max)
	{
		(*range)[i - min] = i;
		i++;
	}
	return (max - min);
}

// #include <stdio.h>
// int main(void){
// 	int min = 5;
// 	int max = 12;
// 	int **range = malloc(sizeof(int) * 1);
// 	int n = ft_ultimate_range(range, min, max);
// 	for (int i = 0;i<max-min;i++){
// 		printf("%d ", (*range)[i]);
// 	}
// 	printf("\n");
// 	printf("n = %d\n", n);
// 	free(*range);
// 	free(range);
// }