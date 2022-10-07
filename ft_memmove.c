/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:22:37 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/07 20:18:24 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, const void *src, size_t len)
{
	char copy[len];
	char  *d;
    char  *s;
    size_t  i;

    d = (char *)dest;
    s = (char *)src;
	i = 0;
	while (i < len)
    {
      copy[i] = s[i];
	  i++;
    }
    i = 0;
    while (i < len)
    {
      d[i] = copy[i];
      i++;
    }
    return dest;
}
