/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_view.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:42:01 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/16 16:38:56 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_view_sub1(int line[4], int *left_view, int *right_view);
void	check_view_sub2(int line[4], int *left_view, int *right_view);
void	check_view_sub3(int line[4], int *left_view, int *right_view);
void	check_view_sub4(int line[4], int *left_view, int *right_view);

void	check_view(int line[4], int *left_view, int *right_view)
{
	if (line[0] == 4)
	{
		check_view_sub1(line, left_view, right_view);
	}
	if (line[1] == 4)
	{
		check_view_sub2(line, left_view, right_view);
	}
	if (line[2] == 4)
	{
		check_view_sub3(line, left_view, right_view);
	}
	if (line[3] == 4)
	{
		check_view_sub4(line, left_view, right_view);
	}
}
