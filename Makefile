# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 19:06:54 by yloutfi           #+#    #+#              #
#    Updated: 2022/10/21 21:13:03 by yloutfi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c		\
	ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c 	\
	ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c 		\
	ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c 		\
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c 		\
	ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c 	\
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c 		\
	ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c	\
	ft_putendl_fd.c ft_putnbr_fd.c

OBJS = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o		\
	ft_isalpha.o ft_isdigit.o ft_isascii.o ft_isprint.o 	\
	ft_memcpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o 		\
	ft_memmove.o ft_memset.o ft_strchr.o ft_strdup.o 		\
	ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o 		\
	ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o 	\
	ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o 		\
	ft_itoa.o ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o	\
	ft_putendl_fd.o ft_putnbr_fd.o

BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c 		\
	ft_lstsize_bonus.c ft_lstlast_bonus.c 					\
	ft_lstadd_back_bonus.c ft_lstdelone_bonus.c				\
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c				

BONUS_OBJS = ft_lstnew_bonus.o ft_lstadd_front_bonus.o		\
	ft_lstsize_bonus.o ft_lstlast_bonus.o					\
	ft_lstadd_back_bonus.o ft_lstdelone_bonus.o 			\
	ft_lstclear_bonus.o ft_lstiter_bonus.o ft_lstmap_bonus.o				
	
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all : $(NAME)

$(NAME) : 
	$(CC) -c $(CFLAGS) $(SRCS)
	ar -rc $(NAME) $(OBJS)

bonus : 
	$(CC) -c $(CFLAGS) $(BONUS_SRCS)
	ar -rs $(NAME) $(BONUS_OBJS)

clean :
	-rm -f $(OBJS)
		
fclean : clean
	-rm -f $(NAME)

re : fclean	all
		
