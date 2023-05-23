/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:16:55 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/20 01:02:18 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 != *s2)
			return ((int)(unsigned char)*s1 - (int)(unsigned char)*s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_strncmp("test", "testss", 7));
}
*/