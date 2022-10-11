/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:45:49 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/11 16:04:02 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lenght;

	i = 0;
	lenght = ft_strlen(src); //use libft.h for ft_strlen
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < dstsize -1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (lenght);
}
