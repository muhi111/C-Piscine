/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_sub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:38:48 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/16 13:32:56 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_view(int line[4], int *left_view, int *right_view);

void	compare_sub1(int board[4][4], int test_view[4][4], int *left_view,
		int *right_view)
{
	int	count1;

	count1 = 0;
	while (count1 < 4)
	{
		check_view(board[count1], left_view, right_view);
		test_view[2][count1] = *left_view;
		test_view[3][count1] = *right_view;
		count1++;
	}
}

void	compare_sub2(int t_board[4][4], int board[4][4])
{
	int	count1;
	int	count2;

	count1 = 0;
	while (count1 < 4)
	{
		count2 = 0;
		while (count2 < 4)
		{
			t_board[count1][count2] = board[count2][count1];
			count2++;
		}
		count1++;
	}
}

void	compare_sub3(int t_board[4][4], int test_view[4][4], int *left_view,
		int *right_view)
{
	int	count1;

	count1 = 0;
	while (count1 < 4)
	{
		check_view(t_board[count1], left_view, right_view);
		test_view[0][count1] = *left_view;
		test_view[1][count1] = *right_view;
		count1++;
	}
}

int	compare_sub4(int test_view[4][4], int view[4][4])
{
	int	count1;
	int	count2;

	count1 = 0;
	while (count1 < 4)
	{
		count2 = 0;
		while (count2 < 4)
		{
			if (test_view[count1][count2] != view[count1][count2])
			{
				return (1);
			}
			count2++;
		}
		count1++;
	}
	return (0);
}
