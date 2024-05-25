/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_view_sub.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:51:44 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/16 12:00:30 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_view_sub1(int line[4], int *left_view, int *right_view)
{
	*left_view = 1;
	if (line[3] == 3)
	{
		*right_view = 2;
	}
	else if (line[3] == 2)
	{
		*right_view = 3;
	}
	else if (line[3] == 1)
	{
		if (line[2] == 3)
		{
			*right_view = 3;
		}
		else
		{
			*right_view = 4;
		}
	}
}

void	check_view_sub2(int line[4], int *left_view, int *right_view)
{
	*left_view = 2;
	if (line[2] < line[3])
	{
		*right_view = 2;
	}
	else
	{
		*right_view = 3;
	}
}

void	check_view_sub3(int line[4], int *left_view, int *right_view)
{
	*right_view = 2;
	if (line[0] > line[1])
	{
		*left_view = 2;
	}
	else
	{
		*left_view = 3;
	}
}

void	check_view_sub4(int line[4], int *left_view, int *right_view)
{
	*right_view = 1;
	*left_view = 1;
	if (line[0] == 3)
	{
		*left_view = 2;
	}
	else if (line[0] == 2)
	{
		*left_view = 3;
	}
	else if (line[0] == 1)
	{
		if (line[1] == 3)
		{
			*left_view = 3;
		}
		else
		{
			*left_view = 4;
		}
	}
}
