/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:45:56 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/06 22:44:31 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(void *s, size_t n)
{
    size_t i;
    char *str;

    str = (char*)s;
    i = 0;
    while(str[i] && i < n)
    {
        str[i] = 0;
        i++;
    }
}