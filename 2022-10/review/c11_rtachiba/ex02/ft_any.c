/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtachiba <rtachiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:53:25 by rtachiba          #+#    #+#             */
/*   Updated: 2022/10/21 18:30:14 by rtachiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_abc_check(char *str)
// {
// 	if (str[0] == 'a' && str[1] == 'b' && str[2] == 'c')
// 		return (1);
// 	return (0);
// }

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;
	int	ans;

	i = 0;
	while ((void *)tab[i] != 0)
	{
		ans = f(tab[i]);
		if (ans != 0)
			return (1);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*tab[3];

// 	tab[0] = "abc";
// 	tab[1] = "abc";
// 	tab[2] = NULL;
// 	printf("%d\n", ft_any(tab, &ft_abc_check));
// 	return (0);
// }

// 配列の各要素をfに与える
// ポインタのポインタなのはなぜ？
// それは、これが二次元配列で、f関数の引数をみると文字列を入れていることから、
// 文字列を入れた配列であることがわかる
// つまり単に、tab[i]をf関数にぶち込めばいい
// その他はex01と同じ

// ヌルポインタは一般的にstdio.hで定義されているが、それを用いない場合は #define NULL ((void *)0)を定義する。
// それか、単純にポインタ = 0とすると自動的にヌルポインタに置き換わる