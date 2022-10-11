/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:49:50 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/11 16:02:42 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

    i = 0;
    sign = 0;
	res = 0;
    while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
        i++;
    while (str[i] && (str[i] == '-' || str[i] == '+') && sign == 0)
    {
        if (str[i] == '-')
            sign = -1;
        if (str[i] == '+')
            sign = 1;
        i++;
    }
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
        res *= 10;
		res += str[i] - '0';     
		i++;
	}
	return (res * sign);
}