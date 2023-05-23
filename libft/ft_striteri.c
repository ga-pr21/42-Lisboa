/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:53:49 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/18 13:27:03 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (index < i)
		{
			(*f)(index, s);
			s++;
			index++;
		}
	}		
}
/*
int main()
{
	myFunction(printNumber);
	return (0);
}
*/