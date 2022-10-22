/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:44:43 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/22 19:27:09 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *string = "a";
	char **result = ft_split(string, ' ');
	int i = 0;
	while (result[i])
	{
		printf("%s\n",result[i]);
		i++;
	}
	if (!result[i])
		printf("%s\n",result[i]);
	return (0);
}

// ["hello world test"]
// ["hello", "world", NULL, NULL] => NULL