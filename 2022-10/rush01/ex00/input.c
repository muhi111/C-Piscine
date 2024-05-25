/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:11:55 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/16 18:13:19 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// OK 0
// NG 1
void	input_sub(char *argv[], int num, int view[4][4])
{
	int	x;
	int	y;

	x = (num / 2) / 4;
	y = (num / 2) % 4;
	view[x][y] = argv[1][num] - 48;
}

int	input(int argc, char *argv[], int view[4][4])
{
	int	num;

	if (argc == 2)
	{
		num = 0;
		while (num < 31)
		{
			if (argv[1][num] >= '1' && argv[1][num] <= '4')
			{
				input_sub(argv, num, view);
				num += 2;
			}
			else
			{
				return (1);
			}
		}
		if (num == 32 && argv[1][31] != '\0')
			return (1);
	}
	else
	{
		return (1);
	}
	return (0);
}
