# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuchiyam <yuchiyam@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 11:16:17 by yuchiyam          #+#    #+#              #
#    Updated: 2022/10/26 04:15:02 by yuchiyam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = *.c
CC = gcc
CFRAGS = -Wall -Wextra -Werror
OBJS = $(SRC:%.c=%.o)
NAME = bsq

all: $(NAME)

$(OBJS):
			$(CC) -c $(SRC) $(CFRAGS)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) $(CFRAGS) -o $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean  all
