/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:44:43 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/18 20:46:23 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	ft_test(unsigned int n, char *s)
{
	if (n == 1)
	{
		*s = 'e';
	}
}


int	main(void)
{
	char	set[] = "hallo";
	ft_striteri(set, &ft_test);
	
	printf("%s\n", set);
	return (0);
}
