/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:55:36 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/13 20:25:05 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    size_t lenght;
     
    if ((count >= SIZE_MAX || size >= SIZE_MAX )) 
      return (NULL);
    lenght = count * size;
    ptr =malloc(lenght);
    if (ptr == NULL)
		  return (0);
    ft_bzero(ptr,lenght); // include library
    return ptr;
}