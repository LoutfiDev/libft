/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:49:50 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/14 08:57:22 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	i += str[i] == '+';
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		if (res * sign > INT_MAX)
			return (-1);
		if (res * sign < INT_MIN)
			return (0);
		res *= 10;
		res += str[i++] - '0';
	}
	return (res * sign);
}
