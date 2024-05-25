/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:41:03 by yutsasak          #+#    #+#             */
/*   Updated: 2024/03/27 07:48:15 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 1024

typedef struct s_mapinf
{
	int		rows;
	int		columns;
	char	**matrix;
	char	empty;
	char	full;
	char	obstacle;
	int		max_square_row;
	int		max_square_col;
	int		max_square_size;
}			t_mapinf;

void	print_map(t_mapinf *map);
void	max_square(t_mapinf *map);
int		read_file(char *file_name, t_mapinf *map);
int		read_stdin(t_mapinf *map);
char	*read_input(int fd);
int		my_atoi(char *str);
char	*ft_strndup(char *src, int n);
char	*ft_double_realloc(char *src);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
void	free_map(t_mapinf *map);
void	init_map(t_mapinf *map);
int		is_valid_input(char *str);
int		is_valid_input(char *str);
int		is_valid_character(char a, char b, char c);
int		is_valid_map_char(char c, char empty, char obstacle);
int		valid_basic(char *str, int *i);
int		valid_first_line(char *str, int *i, int char_index);
int		valid_remaining(char *str, int *i, int char_index, int col_len);

#endif