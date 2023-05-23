/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:26:52 by gabrielp          #+#    #+#             */
/*   Updated: 2023/05/23 22:49:56 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;
	
	i = 0;
	if (!str)
		return (0);
	while(str)
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	int	i;
	
	i = 0;
	if (!str)
		return (0);
	if (c == '\0')
		return ((char *)&str[ft_strlen(str)]);
	while (str[i])
	{
		if (str[i] == (char)c)
			return((char *)&str[i]);
		i++;
	}
	return (0);
}

*ft_strjoin(char *str, char *buffer)
{
	size_t	i;
	size_t	j;
	char	*s;
	
	if (!str)
	{
		str = (char *)malloc(1 * sizeof(char));
		str[0] = '\0';
	}
	if (!str || !buffer)
		return (NULL);
	s = malloc(sizeof(char) * ((ft_strlen(str) + ft_strlen(buffer)) + 1));
	if (s == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (str)
		while (str[++i] != '\0')
			s[i] = str[i];
	while (buffer[j] != '\0')
		s[++i] = buffer[j++];
	s[ft_strlen(str) + ft_strlen(buffer)] = '\0';
	free(str);
	return(str);
}

char	*ft_get_line(char *str)
{
	int		i;
	char	*s;
	
	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!s)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		s[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char *ft_new_str(char *str)
{
	int		i;
	int		j;
	char	*s;
	
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	s = (char *)malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!s)
		return (NULL);
	i++;
	j = 0;
	while (str[i])
		s[j++] = str[i++];
	s[j] = '\0';
	free(str);
	
	return (str);
}