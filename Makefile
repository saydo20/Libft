# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saad <saad@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/13 13:37:58 by saad              #+#    #+#              #
#    Updated: 2025/09/17 17:42:27 by saad             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = $(filter-out main.c, $(wildcard *.c))

OBJS := $(SRCS:.c=.o)

INCLUDES = includes

CFLAGS = -Wall -Wextra -Werror 

.PHONY: all clean fclean re main

all: $(NAME)

$(NAME): $(OBJS)
		ar -crs $@ $^

main: main.c $(NAME)
		cc $(CFLAGS) main.c $(NAME) -o program
%.o: %.c
		gcc $(CFLAGS) -c $< -I$(INCLUDES) -o $@
clean:
	rm -f $(OBJS)
	rm -f program

fclean: clean
	rm -f $(NAME)
	rm -f program

re: fclean all