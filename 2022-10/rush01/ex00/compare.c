/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:28:02 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/16 16:39:20 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_view(int line[4], int *left_view, int *right_view);
void	compare_sub1(int board[4][4], int test_view[4][4], int *left_view,
			int *right_view);
void	compare_sub2(int t_board[4][4], int board[4][4]);
void	compare_sub3(int t_board[4][4], int test_view[4][4], int *left_view,
			int *right_view);
int		compare_sub4(int test_view[4][4], int view[4][4]);

// view = {{colup},{coldown},{rowleft},{rowright}}
//NG 1
//OK 0

int	compare(int board[4][4], int view[4][4])
{
	int	t_board[4][4];
	int	test_view[4][4];
	int	*left_view;
	int	*right_view;
	int	a[2];

	left_view = &a[0];
	right_view = &a[1];
	compare_sub1(board, test_view, left_view, right_view);
	compare_sub2(t_board, board);
	compare_sub3(t_board, test_view, left_view, right_view);
	return (compare_sub4(test_view, view));
}
