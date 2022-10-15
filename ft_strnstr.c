/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:14:21 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/15 11:38:31 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lenght;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)haystack;
	lenght = ft_strlen(needle);
	if (!len && str == 0)
		return (NULL);
	if (lenght == 0)
		return (str);
	while (str[i] && i < len)
	{
		if (str[i] == needle[j])
			j++;
		else
			j = 0;
		i++;
		if (j == lenght)
			return (str + i - j);
	}
	return (0);
}
