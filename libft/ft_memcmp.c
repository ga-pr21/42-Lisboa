/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:39:12 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/22 17:41:41 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*src;

	i = 0;
	dest = (unsigned char *)str1;
	src = (unsigned char *)str2;
	while (i < n)
	{
		if (dest[i] > src[i])
		{
			return (1);
		}
		else if (dest[i] < src[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char str1[15];
// 	char str2[15];
// 	int ret;
// 	memcpy(str1, "aB", 2);
// 	memcpy(str2, "aa", 2);
// 	ret = ft_memcmp(str1, str2, 2);
// 	printf("%d\n", ret);
// }
