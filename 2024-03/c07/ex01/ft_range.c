/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:46:32 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/18 16:02:19 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	range = (int *)malloc(sizeof(int) * (max - min));
	i = min;
	while (i < max)
	{
		range[i - min] = i;
		i++;
	}
	return (range);
}

// #include <stdio.h>
// int main(void){
// 	int min = 5;
// 	int max = 12;
// 	int *range = ft_range(min, max);
// 	for (int i = 0;i<max-min;i++){
// 		printf("%d ", range[i]);
// 	}
// 	free(range);
// 	printf("\n");
// }