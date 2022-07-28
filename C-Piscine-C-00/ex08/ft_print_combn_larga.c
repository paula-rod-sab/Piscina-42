/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn_larga.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:33:18 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/19 15:57:00 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_combn(int n)
{
	if (n >= 1 && n <= 9)
	{
		int combinacion[n]; // Array de n digitos que guarda cada valor
    	int c; // Contador
		int maxDigit;
		int digit;
		int i;
		int a;
		int b;
		
		b = 0;
		c = 0;
		maxDigit = 9;

		// Se guarda la primera combinación 0123...
		while (c < n)
		{
			combinacion[c] = c;
			c++;
		}
		
		// Recorre el valor digito a digito de derecha a izda comprobando si 
		// el valor puede ser incrementado
		
		c = n - 1; // c = 3

		while (b != 1)
		{
			maxDigit = 9;
			a = 0;
			i = 0;
			// Se imprime la combinación actual
			while (i < n)
			{
				ft_putchar(combinacion[i] + '0');
				i++;
			}
			ft_putchar(',');
			ft_putchar(' ');

			while (a != 1 && b != 1)
			{
				digit = combinacion[c];

				if (digit < maxDigit)
				{
					while (c < n)
					{
						digit++;
						combinacion[c] = digit;
						c++;
					}
					a = 1;	
				}
				if (combinacion[0] == maxDigit)
				{
					b = 1;
				}
				maxDigit--;
				c--;
			}
		}
		i = 0;
		while (i < n)
        {
			ft_putchar(combinacion[i] + '0');
			i++;
		}
	}
}
