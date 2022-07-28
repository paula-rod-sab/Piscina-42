/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:48:41 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/21 19:43:47 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(char n)
{
	ft_putchar("0123456789abcdef" [(unsigned char) n / 16]);
	ft_putchar("0123456789abcdef" [(unsigned char) n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			print_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
