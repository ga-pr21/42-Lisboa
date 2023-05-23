/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 00:51:08 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/22 16:37:42 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}
/*
int main()
{
	char *ptr = (char *)ft_calloc(8, sizeof(char));
	char *str = "Gabriel";
	ft_memcpy(ptr, str, 7);
	printf("%s\n", ptr);
}
*/