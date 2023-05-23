/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:48:34 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/22 16:46:33 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int str)
{
	if (str >= '0' && str <= '9')
	{
		return (1);
	}
	else if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_isalnum('~'));
}
*/