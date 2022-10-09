/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:14:21 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/09 12:48:46 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lenght;
	char *str;

	i = 0;
	j = 0;
	lenght = ft_strlen(needle);
	str = (char *)haystack;
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