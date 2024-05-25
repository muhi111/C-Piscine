# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 10:32:50 by yuchiyam          #+#    #+#              #
#    Updated: 2022/10/28 12:48:50 by yuchiyam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = ./srcs
CC = cc
AR = ar
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = -r

OBJS = $(SRC_DIR)/ft_putstr.o \
	$(SRC_DIR)/ft_swap.o \
	$(SRC_DIR)/ft_putchar.o \
	$(SRC_DIR)/ft_strcmp.o \
	$(SRC_DIR)/ft_strlen.o \

NAME = libft.a

INCLUDES = ./includes/*.h

%.o : %.c
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

all: $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean  all