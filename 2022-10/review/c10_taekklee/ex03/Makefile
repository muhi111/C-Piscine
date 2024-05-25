# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taekklee <taekklee@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 18:19:39 by taekklee          #+#    #+#              #
#    Updated: 2022/10/21 14:36:50 by taekklee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = r

TARGET = ft_hexdump
INCLUDE_DIR = .
SRCS_DIR = .
OBJS = $(SRCS_DIR)/ft_putchar.o \
	   $(SRCS_DIR)/ft_putstr.o \
	   $(SRCS_DIR)/ft_strcmp.o \
	   $(SRCS_DIR)/ft_strncmp.o \
	   $(SRCS_DIR)/ft_print_row.o \
	   $(SRCS_DIR)/ft_files.o \

%.o : %.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -o $@ -c $<

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -o $@ $(OBJS) $@.c

.DEFAULT_GOAL = all

all :
	make $(TARGET)

clean :
	rm -f $(OBJS)

fclean :
	make clean
	rm -f $(TARGET)
