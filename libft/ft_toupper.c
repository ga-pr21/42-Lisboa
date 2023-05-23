/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:35:43 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/22 17:40:48 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_toupper(int str)
{
	if (str >= 'a' && str <= 'z')
		return (str - 32);
	return (str);
}
/*
int main()
{
	printf("%c\n", ft_toupper('a'));
}
*/