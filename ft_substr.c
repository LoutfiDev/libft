/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:28:42 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/15 20:13:04 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*substr;
	size_t	i;

	if (!s || len > ft_strlen(s))
		return (0);
	str = (char *)s;
	i = 0;
	substr = malloc(len * sizeof(char) + 1);
	if (substr == NULL)
		return (0);
	if (start >= ft_strlen(str))
		return (ft_strdup(""));
	while (i < len)
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
