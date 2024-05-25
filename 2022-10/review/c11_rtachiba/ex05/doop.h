/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtachiba <rtachiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:57:20 by rtachiba          #+#    #+#             */
/*   Updated: 2022/10/22 03:21:31 by rtachiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>
# define DIV_ERR "Stop : division by zero\n"
# define MOD_ERR "Stop : modulo by zero\n"

int		add(int a, int b);
int		sub(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
int		ft_new_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

#endif