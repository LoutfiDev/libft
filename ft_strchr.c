/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:17:50 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/15 11:37:02 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	if ((unsigned char)c == '\0')
		return (str + ft_strlen(str));
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}
