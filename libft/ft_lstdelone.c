/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:40:45 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/20 21:30:52 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
/*
int main()
{
	t_list *nome = ft_lstnew("Gabriel");
	printf("%s\n", (char *)nome->content);
	
	ft_lstdelone(nome, &del);
	
	printf("%s\n", (char *)nome->content);
}
*/