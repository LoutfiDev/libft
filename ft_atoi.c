/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:49:50 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/22 17:59:34 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_sign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	res;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '+' || str[i] == '-')
		sign = ft_get_sign(str[i++]);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i++] - '0';
	}
	if (sign == -1)
		res = -res;
	return (res);
}
