/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:26:14 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/10 15:34:33 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t	i;
	char *str = (char *)s;

	i = 0;
	if (c == 0)
		return (str + ft_strlen(str)); // must include library
	while (str[i] && i < n)
	{
		if (str[i] == c)
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}