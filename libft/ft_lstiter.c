/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:20:59 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/20 23:19:28 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
void alt(void *lst)
{
	printf("%s\n", lst);
}
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
int main()
{
	t_list *cidade2;
	t_list *lst = NULL;
	t_list *cidade;
	
	cidade2 = ft_lstnew("Pindamoiangaba");
	cidade = ft_lstnew("Itapurucaia");
	ft_lstadd_back(&lst, cidade);
	ft_lstadd_back(&lst, cidade2);
	
	ft_lstiter(lst, &alt);
}
*/