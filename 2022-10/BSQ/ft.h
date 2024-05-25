/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:45:28 by yuchiyam          #+#    #+#             */
/*   Updated: 2022/10/26 18:19:20 by yuchiyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <fcntl.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	write_result(char **array, int size[2]);
int		min_check(int x, int y, int z);
int		max_check(int x, int y);
int		**get_square(char **board, int size[2], char string[4], int *max_width);
void	check_square(int **square_num, int *max_width, int size[2], int num[2]);
char	**gen_square(char **board, int size[2], char string[4]);
char	*read_map(char *map_name);
char	**handle_map(char *raw_map, char string[4], int size[2]);
int		ten_exp(int digit);
int		like_atoi(char *raw_map);
void	ft_putstr(char *str);
char	*read_map_nomal(void);
int		size_input(char *raw_map, int size[2]);
int		gen_map(char *raw_map, char string[4], int size[2], char **board);
int		ternaries(char x, char y);
int		**gen_edge(char **board, int size[2], char string[4], int *max_width);

#endif