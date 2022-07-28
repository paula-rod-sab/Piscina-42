/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:47:43 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/18 19:23:37 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;
	char	b;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -1 * nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
		b = nb + '0';
		write(1, &b, 1);
	}
	else
	{
		a = nb + '0';
		write(1, &a, 1);
	}
}

void	imprimir(int x, int y)
{
	if (x < 10)
	{
		write(1, "0", 1);
	}
	ft_putnbr(x);
	write(1, " ", 1);
	if (y < 10)
	{
		write(1, "0", 1);
	}
	ft_putnbr(y);
	if (x != 98 || y != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			imprimir(x, y);
			y++;
		}
		y = 0;
		x++;
	}
}
