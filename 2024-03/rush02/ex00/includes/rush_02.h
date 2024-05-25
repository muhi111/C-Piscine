/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 07:40:28 by masayama          #+#    #+#             */
/*   Updated: 2024/03/24 15:16:53 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

# define DEFAULT_DICT "numbers.dict"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_dict
{
	char			*key;
	char			*value;
	struct s_dict	*next;
}					t_dict;

t_dict	*load_file(int argc, char *argv[]);
t_dict	*buf_to_struct(char *buf);
char	*read_file(char *dict_name);
int		get_file_size(char *dict_name);
char	*ft_strndup(char *src, int n);
int		ft_strlen(char *str);
int		nbr_to_text(t_dict *dict, char *nbr);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	free_block(char **block);
void	free_dict_list(t_dict *dict_list);
int		is_sucsses_nbr(char *str, char **nbr_start);
int		print_search_digit(t_dict *dict, char *nbr);
int		print_double_digit(t_dict *dict, char *nbr);
int		print_triple_dight(t_dict *dict, char *nbr);
int		print_block(t_dict *dict, char *nbr);
int		print_digit_name(t_dict *dict, int digit);

#endif