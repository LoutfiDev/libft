/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:44:43 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/15 12:53:12 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	int		ret;

	s1 = "123";
	ret = ft_atoi(s1);
	printf("%d\n", ret);
	return (0);
}
