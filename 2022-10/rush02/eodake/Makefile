# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eodake <eodake@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 01:01:19 by eodake            #+#    #+#              #
#    Updated: 2022/10/22 01:01:19 by eodake           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
FUNC = srcs/*.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(FUNC)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re :
	fclean
	all
