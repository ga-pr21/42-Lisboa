/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:07:07 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/15 19:26:40 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int			i;

	i = n;
	if (dst == src)
		return (dst);
	else if (dst > src)
	{
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
int main()
{
	char *src = "gabriel";
	char *dst[15];

	ft_memmove(dst, src, 3);
	printf("ft_memove: %s, src = %s\n", dst, src);
	//memmove(dst, src, 7);
	//printf("memmove: %s, src = %s\n", dst, src);
}
*/