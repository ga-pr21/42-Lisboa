/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:02:33 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/20 20:43:54 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_element;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	lst_element = ft_lstlast(*lst);
	lst_element->next = new;
}
/*
int main()
{
	t_list *lst = NULL;
	
	t_list *name = ft_lstnew("Gabriel");
	t_list *sobre = ft_lstnew("Nogueira");
	t_list *idade = ft_lstnew("26");
	
	ft_lstadd_back(&lst, name);
	ft_lstadd_back(&lst, sobre);
	ft_lstadd_back(&lst, idade);
	
	while (lst)
	{
		printf("%s ", (char *)lst->content);
		lst = lst->next;
	}
}
*/