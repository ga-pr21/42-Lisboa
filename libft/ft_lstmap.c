/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:38:15 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/20 16:54:05 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*void *add_one(void *content)
{
	int *n = (int *)content;
	*n += 1;
	return n;
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cmp;
	t_list	*lst_map;

	if (!f || !del)
		return (NULL);
	lst_map = NULL;
	while (lst)
	{
		cmp = ft_lstnew((*f)(lst->content));
		if (!cmp)
		{
			ft_lstclear(&cmp, del);
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&lst_map, cmp);
		lst = lst->next;
	}
	return (lst_map);
}
/*
int main()
{
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
	*((int *)lst->content) = 1;
	ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
	*((int *)lst->next->content) = 2;
	ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
	*((int *)lst->next->next->content) = 3;

	t_list *lst_map = ft_lstmap(lst, &add_one, &free);

	t_list *node = lst_map;
	while (node)
	{
		printf("%d\n", *((int *)node->content));
		node = node->next;
	}

    return 0;
}
*/