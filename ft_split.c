/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:15:11 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/18 10:41:24 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr_array(const char * str, char c)
{
	int		i;
	int		nbr;

	i = 0;
	nbr = 1;
	if (!*str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1])
			nbr++;
		i++;
	}	
	return (nbr);
}

static char	*ft_fill_array(char *str, char c, int *j)
{
	int		start;
	int		lenght;

	start = *j;
	lenght = 0;
	while (str[*j] != c && str[*j])
	{
		(*j)++;
		lenght++;
	}
	return (ft_substr(str, start, lenght));
}

char	**ft_split(char const *s, char c)
{
	char	**big_array;
	char	*trimmed;
	int		i;
	int		j;
	int		nbr;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	trimmed = ft_strtrim(s, &c);
	nbr = ft_nbr_array(trimmed, c);
	big_array = malloc((nbr + 1) * sizeof(char *));
	if (big_array == NULL)
		return (0);
	while (i < nbr)
	{
		if (trimmed[j] != c)
			big_array[i++] = ft_fill_array(trimmed, c, &j);
		j++;
	}
	big_array[nbr] = NULL;
	return (big_array);
}
