/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:52:54 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/07 15:41:46 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main(void){
// 	char dest1[] = "ABCDE";
// 	char src1[] = "123";
// 	printf("dest : %s\n", dest1);
// 	printf("src  : %s\n", src1);
// 	printf("expected output : 123\n");
// 	printf("result : %s\n", ft_strcpy(dest1, src1));
// }