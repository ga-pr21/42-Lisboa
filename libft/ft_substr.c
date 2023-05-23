/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:46:53 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/18 17:03:46 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static unsigned int	ft_size(size_t str_len, size_t start, size_t max_len)
{
	unsigned int	count;

	if (start < str_len)
		count = str_len - start;
	if (start >= str_len)
		count = 0;
	if (count > max_len)
		count = max_len;
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring_ptr;
	unsigned int	new_max_len;
	size_t			str_len;

	if (!s)
		return (NULL);
	str_len = (unsigned int)ft_strlen(s);
	new_max_len = ft_size(str_len, start, len);
	if (new_max_len == 0)
		return (ft_strdup(""));
	substring_ptr = ft_calloc(new_max_len + 1, sizeof(char));
	if (!substring_ptr)
		return (NULL);
	ft_strlcpy (substring_ptr, &s[start], new_max_len + 1);
	return (substring_ptr);
}
/*
int main() {
    char str[] = "Hello World";
    char *substr = NULL;
    substr = ft_strdup(str + 2);
    //substr[5] = '\0';
    printf("%s\n", substr);
    free(substr);
    return 0;
}
*/