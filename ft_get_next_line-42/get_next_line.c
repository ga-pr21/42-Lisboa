/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:06:55 by gabrielp          #+#    #+#             */
/*   Updated: 2023/05/23 22:54:38 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_str(int fd, char *str)
{
	char	*buffer;
	int		rd_bytes;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	rd_bytes = 1;
	while ()
	{
		/* code */
	}
	
}

char *get_next_line(int fd)
{
	char 	buffer;
	char 	line[1000000];
	int		i;
	int		a;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	a = read(fd, &buffer, 1);
	i = 0;
	while (a > 0)
	{
		line[i++] = buffer;
		if (buffer == '\n')
			break;
		a = read(fd, &buffer, 1);
	}
	line[i] = '\0';
	if (a <= 0 && i == 0)
		return (NULL);
	return (ft_strdup(line));
}

int main()
{
	int fd = open("teste.txt", O_RDONLY);
	while(get_next_line(fd))
	{
		printf("%s", get_next_line(fd));
	}
	
}