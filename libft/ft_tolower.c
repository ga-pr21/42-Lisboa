/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:47:47 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/22 17:40:32 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_tolower(int str)
{
	if (str >= 'A' && str <= 'Z')
		return (str + 32);
	return (str);
}

// int main()
// {
// 	printf("%c\n", ft_toupper('A'));
// }