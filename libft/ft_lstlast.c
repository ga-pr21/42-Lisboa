/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 00:06:07 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/20 23:33:39 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lst_element;
	t_list	*last_lst;

	if (!lst)
		return (NULL);
	lst_element = lst;
	while (lst_element)
	{
		last_lst = lst_element;
		lst_element = lst_element->next;
	}
	return (last_lst);
}
/*
int main()
{
	t_list *list = NULL;
	list = ft_lstnew("Salve");
	ft_lstadd_front(&list, ft_lstnew("Cambada"));
	ft_lstadd_front(&list, ft_lstnew("!"));
	
	t_list *last = ft_lstlast(list);
	
	printf("%s\n", (char *)last->content);
}
*/