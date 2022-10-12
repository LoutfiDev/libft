/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:22:37 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/12 13:28:17 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{	
	char  *d;
	char  *s;
	size_t i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (d < s)
	{
		while (i < len && (d != 0 || s != 0))
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		while (len > 0 && (d != 0 || s != 0))
		{
			len --;
			d[len] = s[len];
		}
	}
	return dst;
}
