/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:15:11 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/17 14:10:32 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_nbr_array(const char *str, char c)
{
	int		i;
	int		nbr;

	i = 0;
	nbr = 0;
	while (str[i])
	{
		if (str[i] == c)
			nbr++;
		while (str[i] == c)
			i++;
		i++;
	}	
	return (nbr + 1);
}

static char	*fill_array(char *str)
{
	int	j;

	j = 0;
	while (trimmed[i] == c)
		i++;
	while (trimmed[i] && trimmed[i] != c)
	{
		j++;
		i++;
	}
	if (trimmed[i] == '\0')
		break ;
	i++;
}

char	**ft_split(char const *s, char c)
{
	char	**big_array;
	char	*trimmed;
	int		i;
	int		nbr;
	int		j;

	i = 0;
	trimmed = ft_strtrim(s, &c);
	nbr = ft_nbr_array(trimmed, c);
	big_array = (char **)malloc(nbr * sizeof(char *));
	if (big_array == NULL)
		return (0);
	while (i < nbr)
	{
		
	}
	
	return (big_array);
}
