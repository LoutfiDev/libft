/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:55:36 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/09 21:30:52 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    size_t i;
    size_t lenght;
     
    lenght = count * size;
    if ((count == SIZE_MAX || size == SIZE_MAX ) && (lenght > SIZE_MAX)) 
      return (NULL);
    ptr =malloc(lenght);
    if (ptr == NULL)
		  return ((void *)-1);
    ft_bzero(ptr,lenght); // include library
    return ptr;
}