/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:44:43 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/19 22:34:54 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	ft_lst_print(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		printf("%d : %s\n", i++, lst->content);
		lst = lst->next;
	}
	printf("-----------------------\n");
}

int	main(void)
{
	t_list	*head = NULL;
	t_list	*second = NULL;
	t_list	*added = NULL;
	t_list	*last = NULL;
	
	head = (t_list *)malloc(sizeof(t_list));
	second = (t_list *)malloc(sizeof(t_list));

	head->content = "Head";
	head->next = second;
	second->content = "Second";
	second->next = NULL;
	added = ft_lstnew("added");
	// ft_lst_print(head);
	// ft_lstadd_front(&head, added);
	// ft_lst_print(head);
	// printf("%d\n",ft_lstsize(head));
	// last = ft_lstlast(head);
	// printf("content :%s\n",last->content);
	// ft_lstadd_back(&head, added);
	// ft_lst_print(head);
	return (0);
}
