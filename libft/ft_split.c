/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 01:05:00 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/22 17:41:23 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	str_count(const char *s, char c)
{
	int	i;
	int	leng;

	i = 0;
	leng = 0;
	while (*s && *s == c)
		s++;
	while (s[leng])
	{
		if (!leng)
			i++;
		else if (s[leng - 1] == c && s[leng] != c)
			i++;
		leng++;
	}
	return (i);
}

static size_t	ft_position(char const *s, char c)
{
	size_t	posit;

	posit = 0;
	while (s[posit] && s[posit] != c)
		posit++;
	return (posit);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	fm;
	size_t	leng_array;
	size_t	counter;

	if (!s)
		return (NULL);
	leng_array = str_count(s, c);
	arr = malloc((leng_array + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	counter = 0;
	while (counter < leng_array)
	{
		while (*s && *s == c)
			s++;
		fm = ft_position(s, c);
		arr[counter] = ft_substr(s, 0, fm);
		s += fm + 1;
		counter++;
	}
	arr[leng_array] = NULL;
	return (arr);
}

// int main()
// {
// 	char *str = "hello!zzzzzzzz";
// 	char src = 'z';
// 	char **arr = ft_split(str, src);
// 	int i = 0;
// 	while(arr[i] != NULL)
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// }
