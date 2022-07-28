/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:10:49 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/26 18:31:13 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	print_base(int nbr, char *base)
{
	unsigned char	a;
	unsigned int	n;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -1 * nbr;
	}
	else
	{
		n = nbr;
	}
	if (n >= (unsigned int) ft_strlen(base))
	{
		print_base((n / ft_strlen(base)), base);
		a = base[(n % ft_strlen(base))];
		write(1, &a, 1);
	}
	else
	{
		a = base[nbr];
		write(1, &a, 1);
	}
}

int	is_rep(char *str, char a)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
			count++;
		i++;
	}
	return (count);
}

int	check_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || is_rep(base, base[i]) >= 2)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (check_base(base) == 1 && ft_strlen(base) != 0 && ft_strlen(base) != 1)
	{
		print_base(nbr, base);
	}
}
