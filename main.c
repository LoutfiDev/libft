/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:44:43 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/12 15:39:47 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <string.h>
#include <stdio.h>

int main () 
{
    char *s1 = "abcdef";
	char *s2 = "abcdefghijklmnop";
	size_t size = 6;
    printf("%d\n",ft_strncmp(s1,s2,size));
    printf("%d\n",strncmp(s1,s2,size));
    return 0;
}