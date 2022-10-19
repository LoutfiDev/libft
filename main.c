/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:44:43 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/19 10:58:27 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include<fcntl.h> 
#include<errno.h> 

int	main(void)
{
	extern int	errno;
	int			iofd;
	char		*c;
	mode_t		mode;

	c = "hello";
	mode = O_WRONLY | O_RDONLY;
	iofd = creat("test.txt", mode);
	if (iofd == -1)
	{
		printf("Error Number %d\n", errno);
		perror("Program");
	}
	printf("iofd = %d\n", iofd);
	ft_putendl_fd(c, iofd);
	close(iofd);
	return (0);
}
