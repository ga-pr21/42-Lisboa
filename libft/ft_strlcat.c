/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:57:01 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/19 14:50:08 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	hold;

	src_len = ft_strlen(src);
	dest_len = 0;
	while (dest_len < size && dest[dest_len])
		dest_len++;
	hold = dest_len;
	while (src[dest_len - hold] && (dest_len + 1) < size)
	{
		dest[dest_len] = src[dest_len - hold];
		dest_len++;
	}
	if (hold < size)
		dest[dest_len] = '\0';
	return (hold + src_len);
}
/*
int main()
{
	char str[20] = "meu ";
	char *src = "nome do meio";
	printf("%d | %s\n", ft_strlcat(str, src, 4), str);
}
*/