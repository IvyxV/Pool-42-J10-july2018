# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: viboujem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/26 10:44:24 by viboujem          #+#    #+#              #
#    Updated: 2018/07/26 23:41:47 by viboujem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc

AR		=	ar ac

FLAG-C	=	-c -Wall -Wextra -Werror

SRCS-C	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c

SRCS-O	= *.o

all:	$(NAME)

$(NAME):
		$(CC) $(FLAG-C) $(SRC-C)
		$(AR) $(NAME) $(SRC-O)

clean:
		/bin/rm -rf *.o
		/bin/rm -rf *.swp

fclean = clean
		/bin/rm -rf $(NAME)

re:		fclean all
