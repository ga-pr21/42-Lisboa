/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrielp <gabrielp@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:22:36 by gabrielp          #+#    #+#             */
/*   Updated: 2023/04/22 17:27:32 by gabrielp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		base;
	int		zero;
	char	digi;

	base = 1000000000;
	zero = 0;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	if (n < 0 && n != -2147483648)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	while (base && n != -2147483648)
	{
		digi = '0' + n / base;
		if (digi != '0')
			zero = 1;
		if (zero)
			ft_putchar_fd(digi, fd);
		n = n % base;
		base = base / 10;
	}
}
/*
int main()
{
	ft_putnbr_fd(245044, 1);
	write(1, "\n", 1);
}
*/