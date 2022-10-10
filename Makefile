# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 19:06:54 by yloutfi           #+#    #+#              #
#    Updated: 2022/10/10 19:55:14 by yloutfi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

objects = ft_*.com

libft : $(objects)
		cc -o libft $(objects)
$(objects) : libft.h
clean :
		-rm libft $(objects)