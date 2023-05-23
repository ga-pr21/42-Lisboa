/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:16:42 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/18 21:15:01 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*   hello word  */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	ini;
	size_t	fm;

	if (!s1 || !set)
		return (NULL);
	if (!*s1 || !*set)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + 1;
	ini = 0;
	while (s1[ini] && ft_strchr(set, s1[ini]))
		ini++;
	fm = len;
	while (ini < fm && ft_strchr(set, s1[fm - 1]))
		fm--;
	return (ft_substr(s1, ini, (fm - ini)));
}
/*
int main()
{
	printf("%s\n", ft_strtrim("  hello word  ", " "));
}
*/