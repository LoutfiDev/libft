/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:55:36 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/09 16:30:12 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    char *p;
    size_t i;
    size_t lengh;
     
    lengh = count * size;
    ptr =malloc(lengh);
    p = (char *)ptr;
    i = 0;
    while(i < lengh)
    {
        p[i] = 0;
        i++;
    }
    return ptr;
}