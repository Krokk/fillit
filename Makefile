# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/18 00:39:27 by rfabre            #+#    #+#              #
#    Updated: 2017/01/18 01:20:32 by rfabre           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CFLAGS += -Wall -Wextra -Werror

SRC = main.c \
	  solve.c\
	  read_input.c\
	  error.c\
	  get_coord.c\
	  parsencheck.c\

LIB =  ../LIBFT/libft.a

CC = cc

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) -g  $(OBJ) $(LIB) -o $(NAME)
			#@./fillit valid_sample_file

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all

