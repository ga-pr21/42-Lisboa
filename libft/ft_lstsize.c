/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 23:45:58 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/20 20:36:19 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*element;

	count = 0;
	element = lst;
	while (element != NULL)
	{
		count++;
		element = element->next;
	}
	return (count);
}
/*
int main()
{
	t_list *nome = ft_lstnew("Gabriel");
	t_list *sobre = ft_lstnew("Nogueira");
	t_list *lst = NULL;
	ft_lstadd_back(&lst, nome);
	ft_lstadd_back(&lst, sobre);
	int size = ft_lstsize(lst);
	printf("%d\n", size);
}
*/