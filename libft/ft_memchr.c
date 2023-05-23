/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:38:45 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/22 16:58:10 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*dst;
	size_t			i;

	i = 0;
	dst = (unsigned char *)str;
	while (i < n)
	{
		if (dst[i] == (unsigned char)c)
		{
			return (dst + i);
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char *ptr = (char *)malloc(7 * sizeof(char));
// 	ft_memcpy(ptr, "gabriel", 8);
// 	printf("%s\n", ft_memchr(ptr, 'b', 8));
// }