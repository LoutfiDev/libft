/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:22:37 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/11 16:03:22 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{	
	char	copy[1000];
	char  *d;
	char  *s;

	d = (char *)dst;
	s = (char *)src;
	ft_memcpy(copy,src,len);
	ft_memcpy(dst,copy,len);
	return dst;
}
