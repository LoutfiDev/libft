/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:44:43 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/21 21:22:15 by yloutfi          ###   ########.fr       */
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

void	ft_test_iter(void *a)
{
	char  *new = a;
	for (int i = 0;new[i];i++)
	{
		new[i] = ft_toupper(new[i]);
	}
}

void	*ft_test_map(void *a)
{
	int i;
	char *s;

	i = 0;
	s = (char *)a;
	while(s[i])
	{
		s[i] = ft_toupper(s[i]);
		i++;
	}
	return (a);
}

int	main(void)
{
	t_list	*head = NULL;
	t_list	*second = NULL;
	t_list	*third = NULL;
	t_list	*fourth = NULL;
	t_list	*added = NULL;
	t_list	*last = NULL;
	t_list	*new = NULL;

	head = (t_list *)malloc(sizeof(t_list));
	second = (t_list *)malloc(sizeof(t_list));
	third = (t_list *)malloc(sizeof(t_list));
	fourth = (t_list *)malloc(sizeof(t_list));

	head->content = ft_strdup("Head");
	head->next = second;
	second->content = ft_strdup("Second");
	second->next = third;
	third->content = ft_strdup("third");
	third->next = fourth;
	fourth->content = ft_strdup("fourth");
	fourth->next = NULL;
	// added = ft_lstnew("added");
	ft_lst_print(head);
	// ft_lstadd_front(&head, added);
	// ft_lst_print(head);
	// printf("%d\n",ft_lstsize(head));
	// last = ft_lstlast(head);
	// printf("content :%s\n",last->content);
	// ft_lstadd_back(&head, added);
	// ft_lst_print(head);
	// ft_lstdelone(second, ft_test);
	// printf("content :%s\n",second->content);
	// ft_lstiter(second, ft_test);
	// ft_lst_print(second);
	new = ft_lstmap(head, ft_test_map,free);
	ft_lst_print(new);
	return (0);
}
