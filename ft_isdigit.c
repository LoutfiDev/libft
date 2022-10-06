/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:02:55 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/06 12:04:09 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isdigit (int c)
{
	if (c >= 48 && c <= 57)
		return 1;
	return 0;
}

int main ()
{
	printf("min :%d originr :%d",ft_isdigit("5"),isdigit("5"));
	return 0;
}
