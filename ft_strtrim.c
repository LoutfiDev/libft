/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:34:20 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/14 20:12:33 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_start(const char s1, const char set)
{

}



char	*ft_strtrim(char const *s1, char const *set)
{
	char			*res;
	unsigned int	start;
	int				len;
	
	if (!s1 || !set)
		return (0);
	start = ft_get_start();
	len = ft_get_len();
	res = malloc(len * sizeof(char) + 1);
	if (res == NULL)
		return (0);
	res = ft_substr(s1, start, len);
	res[len + 1] = '\0';
	return (res);
}
