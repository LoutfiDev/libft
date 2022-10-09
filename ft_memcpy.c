/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:45:34 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/09 11:07:36 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char  *d;
    char  *s;
    size_t  i;
    
    d = (char *)dst;
    s = (char *)src;
    i = 0;
    while (i < n)
    {
      d[i] = s[i];
      i++;
    }
    return dst; // must read a bit about OVERLAP
}