/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:05:39 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/17 23:14:07 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_ispos(const char *str, int *posi, int *neg, int *index)
{
	int	i;
	int	p;
	int	n;

	i = 0;
	p = 0;
	n = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n++;
		if (str[i] == '+')
			p++;
		i++;
	}
	*posi = p;
	*neg = n;
	*index = i;
}

int	ft_atoi(const char *str)
{
	int	i;
	int	dest;
	int	posi;
	int	neg;

	i = 0;
	dest = 0;
	posi = 0;
	neg = 0;
	ft_ispos(str, &posi, &neg, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		dest = (dest * 10) + (str[i] - '0');
		i++;
	}
	if (posi > 1 || neg > 1 || posi + neg > 1)
		return (0);
	if (neg == 1)
		return (dest *= -1);
	return (dest);
}
/*
int main()
{
	printf("%d\n", ft_atoi("47"));
}
*/