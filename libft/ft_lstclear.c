/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:53:55 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/20 20:58:26 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_lt;
	t_list	*content;

	if (!*lst)
		return ;
	content = *lst;
	while (content)
	{
		lst_lt = content->next;
		ft_lstdelone(content, del);
		content = lst_lt;
	}
	*lst = NULL;
}
/*
int main()
{
	t_list *lst = NULL;
	
	t_list *nome = ft_lstnew("Bingo");
	t_list *raca = ft_lstnew("Cachorro");
	t_list *idade = ft_lstnew("5");
	
	ft_lstadd_front(&lst, nome);
	ft_lstadd_back(&lst, raca);
	ft_lstadd_back(&lst, idade);
	
	while (lst)
	{
		printf("%s \n", lst->content);
		lst = lst->next;
	}
	ft_lstclear(&lst, &free);
	
	int size = ft_lstsize(lst);

	printf("%d \n", size);	
}*/