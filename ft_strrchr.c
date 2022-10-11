/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:47:43 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/11 16:04:16 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int j;
	char *str = (char *)s;

	i = 0;
	j = 0;
	if (c == 0)
		return (str + ft_strlen(str)); // must include library
	while (str[i])
	{
		if (str[i] == c)
			j = i;
		i++;
	}
	if (j > 0)
		return (str + j);
	return (NULL);
}
