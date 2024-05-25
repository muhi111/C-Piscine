# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taekklee <taekklee@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 10:21:58 by taekklee          #+#    #+#              #
#    Updated: 2022/10/20 11:03:13 by taekklee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = r

TARGET = ft_display_file
INCLUDE_DIR = .
SRCS_DIR = .
OBJS = $(SRCS_DIR)/$(TARGET).o

%.o : %.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -o $@ -c $<

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -o $@ $<

.DEFAULT_GOAL = all

all :
	make $(TARGET)

clean :
	rm -f $(OBJS)

fclean :
	make clean
	rm -f $(TARGET)
