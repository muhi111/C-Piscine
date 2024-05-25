# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykusano <ykusano@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 15:00:09 by ykusano           #+#    #+#              #
#    Updated: 2022/10/22 00:35:37 by ykusano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

TARGET = libft.a
INCLUDE_DIR = ./includes
SCRS_DIR = ./srcs
CJS =	$(SCRS_DIR)/ft_putchar.c \
		$(SCRS_DIR)/ft_swap.c \
		$(SCRS_DIR)/ft_putstr.c \
		$(SCRS_DIR)/ft_strlen.c \
		$(SCRS_DIR)/ft_strcmp.c \

OBJS =	$(SCRS_DIR)/ft_putchar.o \
		$(SCRS_DIR)/ft_swap.o \
		$(SCRS_DIR)/ft_putstr.o \
		$(SCRS_DIR)/ft_strlen.o \
		$(SCRS_DIR)/ft_strcmp.o \

$(OBJS) : $(CJS)
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -c $< -o $@

$(TARGET) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $<

.DEFAULT_GOAL = all

all :
	make $(TARGET)

clean :
	rm -f $(OBJS)

fclean :
	make clean
	rm -f $(TARGET)

re :
	make fclean
	make all
