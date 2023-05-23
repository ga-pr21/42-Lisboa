/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:22:46 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/22 16:47:53 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int str)
{
	return ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'));
}

// int main()
// {
// 	printf("%d\n", ft_isalpha('a'));
// }