/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:35:58 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/09 17:25:03 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t  ft_strlen (const char *str)
{
    size_t len;

    len = 0;
    while (str[len])
        len++;
    return len;
}

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	char	*q;

	ptr = (char *)malloc(ft_strlen(s1) + 1);
	if (ptr == NULL)
		return (NULL);
	q = ptr;
	while (*s1)
	{
		*q = *s1;
		q++;
		s1++;
	}
	*q = '\0';
	return (ptr);
}

int main ()
{
    char *ptr = "Hello world";
    printf("result of origin :%s",strdup(ptr));
    printf("\nresult of mine   :%s",ft_strdup(ptr));
    return 0;
}
