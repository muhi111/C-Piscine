/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Shion Ichikawa <shion1305@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 02:43:48 by Shion Ichikawa    #+#    #+#             */
/*   Updated: 2022/10/18 14:47:32 by Shion Ichikawa   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN_MSG "I have an even number of arguments.\n"
# define EVEN(n) (n % 2 == 0)

typedef int	t_bool;
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
#endif