# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saad <saad@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/13 13:37:58 by saad              #+#    #+#              #
#    Updated: 2025/09/13 15:03:26 by saad             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c \
		ft_putchar.c

OBJS := $(SRCS:.c=.o)

INCLUDES = includes

CFLAGS = -Wall -Wextra -Werror 

.PHONY: all clean fclean re 

all: $(NAME)

$(NAME): $(OBJS)
		ar -crs $@ $^
%.o: %.c
		gcc $(CFLAGS) -c $< -I$(INCLUDES) -o $@
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all