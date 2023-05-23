/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:51:49 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/17 19:13:00 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*hello world*/
char	*ft_strnstr(const char *str, const char *src, size_t len)
{
	size_t	leng;

	leng = ft_strlen(src);
	if (!leng)
		return ((char *)str);
	while (*str && leng <= len--)
	{
		if (!ft_memcmp(str, src, leng))
			return ((char *)str);
		str++;
	}
	return (NULL);
}
/*
int main()
{
	char *str = "o gato pulou do telhado";
	printf("%s\n", ft_strnstr(str, "telhado", strlen(str)));
}
*/
