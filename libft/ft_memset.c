/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:51:04 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/15 17:12:53 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *str, int value, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(str + i) = (unsigned char)value;
		i++;
	}
	return (str);
}

/*
int main()
{
	char dst[50];
	char lib = NULL;
	int *f1;
	int *f2;
	f1 = ft_memset(dst, lib, 40);
	f2 = memset(dst, lib, 40);
	
	
	printf("result: %s\n", f1);
	printf("result: %s\n", f2);
}
*/