# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 02:45:51 by youchiya          #+#    #+#              #
#    Updated: 2024/03/24 13:47:12 by masayama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = rush-02
SRCS = srcs/main.c \
		srcs/file_to_struct.c \
		srcs/utility.c \
		srcs/nbr_to_text.c \
		srcs/is_sucsses_nbr.c \
		srcs/free.c \
		srcs/string_func.c \
		srcs/print_func.c
OBJCS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I ./includes

all: $(NAME)

$(NAME): $(OBJCS)
	$(CC) $(CFLAGS) $(OBJCS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJCS)

fclean: clean
	rm -f $(NAME)

re: fclean all