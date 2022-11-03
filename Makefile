# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: preina-g <preina-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 12:15:04 by preina-g          #+#    #+#              #
#    Updated: 2022/11/03 13:58:27 by preina-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs

NAME = push_swap

INCLUDE = pslib.h

SRC = main.c parsing_input.c

OBJECTS = $(SRC:.c=.o)

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS) $(INCLUDE)
	@make -C libft -s
	$(CC) -o $(NAME) $(OBJECTS) -L libft -lft

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	@make clean -C libft
	rm -f *.o

fclean:
	@make clean -C libft
	rm -f *.o $(NAME)

re:	fclean all