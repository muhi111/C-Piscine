/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:28:08 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/16 16:38:49 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// NG 1
// OK 0

int	check(int i, int j, int num, int a[4][4])
{
	int	count;

	count = 0;
	while (count < 4)
	{
		if (a[count][j] == num)
		{
			return (1);
		}
		if (a[i][count] == num)
		{
			return (1);
		}
		count++;
	}
	return (0);
}
