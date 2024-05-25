/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eodake <eodake@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:00:44 by eodake            #+#    #+#             */
/*   Updated: 2022/10/23 17:37:28 by eodake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

typedef struct s_dict
{
	char	*key;
	char	*word;
}	t_dict;

void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_put_error(void);
void	ft_put_dicterror(void);
int		ft_verify(char *str);
int		ft_to_dict(char *dictname, t_dict *dict);

#endif
