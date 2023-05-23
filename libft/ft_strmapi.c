/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:33:34 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/22 17:39:49 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// char ft_onemore(unsigned int index, char c)
// {
// 	return(c + 1);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	ind;
	size_t			len;
	char			*result;

	len = ft_strlen(s);
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	ind = 0;
	while (ind < len)
	{
		result[ind] = f(ind, s[ind]);
		ind++;
	}
	result[len] = '\0';
	return (result);
}

// int main()
// {
// 	char *str = "12345";
// 	printf("%s\n", ft_strmapi(str, ft_onemore));
// }