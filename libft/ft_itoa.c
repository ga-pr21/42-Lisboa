/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:39:15 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/18 21:16:53 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	f_recursiv(int c)
{
	return (c + '0');
}

int	is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

int	count(int n)
{
	int	i;

	i = 1;
	while (n / 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		i;
	int		negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	negative = is_negative(n);
	if (negative)
		n = -n;
	i = count(n) + negative;
	dest = (char *)malloc((i + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[i] = '\0';
	if (negative)
		dest[0] = '-';
	while (i-- > negative)
	{
		dest[i] = f_recursiv(n % 10);
		n = n / 10;
	}
	return (dest);
}
/*
int main()
{
	printf("%s\n", ft_itoa(-2147483647));
}
*/