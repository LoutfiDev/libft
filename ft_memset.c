/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:15:36 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/06 18:15:36 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memset(void *s, char c, size_t n)
{
    char    *str = (char *)s;
    size_t i;
    i = 0;
    printf("-----str:%s\n", str);
    while(n && str[i])
    {
        printf("-----str2:%s\n", str);
        printf("-----str[0]:%c\n", str[0]);
        printf("-----c:%c\n", c);
        str[i] = c;
        i++;
        n--;
    }
    return s;
}


int main()
{
    char *str = "GeeksForGeeks is for programming geeks.";
    char *string = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore : %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    //memset(str + 13, '.', 8*sizeof(char));
    ft_memset(string, '.', 8);
  
    printf("\nAfter memset():  %s", str);
    //printf("\nAfter ft_memset():  %s", string);
    return 0;
}