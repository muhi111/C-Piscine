# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 02:45:51 by youchiya          #+#    #+#              #
#    Updated: 2024/03/23 09:11:13 by youchiya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = do-op
SRCS = srcs/atoi.c \
		srcs/main.c \
		srcs/misc.c \
		srcs/operator.c
OBJCS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(OBJCS)
	$(CC) $(CFLAGS) $(OBJCS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJCS)

fclean: clean
	rm -f $(NAME)