/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:44:43 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/18 00:29:37 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	// const char *str = "split  ||this  |for|me|||||!|";
	char *s = "      split       this for   me  !       ";
 	char **arr = ft_split(s, ' ');
	int i = 0;
	while(array[i])
	{
		printf("main: %s\n",array[i]);
		i++;
	}
	return (0);
}
