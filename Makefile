# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 19:06:54 by yloutfi           #+#    #+#              #
#    Updated: 2022/10/11 19:13:19 by yloutfi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_*.c
OBJ = ft_*.o
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all : $(NAME)

$(NAME) : 
	$(CC) -c $(CFLAGS) $(SRC)
	ar -rc $(NAME) $(OBJ)


clean :
	-rm -f $(OBJ)
		
fclean : clean
	-rm -f $(NAME)

re : fclean	all
		
