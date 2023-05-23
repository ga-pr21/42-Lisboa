/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:31:21 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/18 20:26:47 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(str);
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, str, len);
	dup[len] = '\0';
	return (dup);
}

/*
int main()
{
	char *str = "nome do meio";
	printf("%s\n", ft_strdup(str));
	return (0);
}
*/