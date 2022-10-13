/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:44:43 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/13 20:17:14 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <string.h>
#include <stdio.h>

int main () 
{
    char *s = "++954";
    printf("%d\n",atoi(s));
    printf("%d\n",ft_atoi(s));
    // printf("%s\n",s2);
    return 0;
}