/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:08:16 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/19 14:51:56 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	ind;
	size_t			lens1;
	size_t			lens2;
	char			*result;

	lens2 = ft_strlen(s2);
	lens1 = ft_strlen(s1);
	result = (char *)malloc(((lens2 + lens1) + 1) * sizeof(char));
	ind = 0;
	if (!result)
		return (NULL);
	result = ft_memcpy(result, s1, lens1);
	while (ind < lens2)
	{
		result[lens1 + ind] = s2[ind];
		ind++;
	}
	result[lens2 + lens1] = '\0';
	return (result);
}
/*
int main()
{
	printf("%s\n", ft_strjoin("dolor ", "sit amet "));
}
*/