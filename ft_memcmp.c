/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:21:58 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/09 11:57:28 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t	i;
    char *str1 = (char *)s1;
    char *str2 = (char *)s2;
    
	i = 0;
	while (i < n - 1 && str1[i] == str2[i])
	{
		i++;
	}
    printf("\nvaleur de i :%zu \t valeur de s1[i] :%c \t valeur de s2[i] :%c",i,str1[i],str2[i]);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]); 
}