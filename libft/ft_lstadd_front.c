/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 23:00:27 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/18 23:37:39 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*last_element;

	last_element = *lst;
	*lst = new;
	new->next = last_element;
}
/*
int main() {

    t_list *list = ft_lstnew("element 1");
    t_list *new_element = ft_lstnew("new element");
    ft_lstadd_front(&list, new_element);
    printf("Lista atualizada:\n");
    t_list *element = list;
    while (element != NULL) {
        printf("%s\n", (char *)element->content);
        element = element->next;
    }
}
*/