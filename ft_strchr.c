/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:17:50 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/08 20:25:33 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char *str = (char *)s;

	i = 0;
	if (c == 0)
		return (str + ft_strlen(str)); // must include library
	while (str[i])
	{
		if (str[i] == c)
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}

