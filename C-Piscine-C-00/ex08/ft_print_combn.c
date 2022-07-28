/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:33:18 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/19 15:53:27 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	imprimir(int n, int *combinacion, int isFinal)
{
	int		i;
	char	letra;

	i = 0;
	while (i < n)
	{
		letra = combinacion[i] + '0';
		write(1, &letra, 1);
		i++;
	}
	if (isFinal == 0)
	{
		write(1, ", ", 2);
	}
}

void	rellenar_primer_comb(int *abc, int n, int *combinacion)
{
	abc[1] = 0;
	abc[2] = 0;
	while (abc[2] < n)
	{
		combinacion[abc[2]] = abc[2];
		abc[2]++;
	}
	abc[2] = n - 1;
}

void	recorrer_digito(int *abc, int *digit_max, int *combinacion, int n)
{
	while (abc[0] != 1 && abc[1] != 1)
	{
		digit_max[1] = combinacion[abc[2]];
		if (digit_max[1] < digit_max[0])
		{
			while (abc[2] < n)
			{
				digit_max[1]++;
				combinacion[abc[2]] = digit_max[1];
				abc[2]++;
			}
			abc[0] = 1;
		}
		if (combinacion[0] == digit_max[0])
		{
			abc[1] = 1;
		}
		digit_max[0]--;
		abc[2]--;
	}
}

void	combi(int n)
{
	int	combinacion[9];
	int	abc[3];
	int	digit_max[2];

	rellenar_primer_comb(abc, n, combinacion);
	while (abc[1] != 1)
	{
		digit_max[0] = 9;
		abc[0] = 0;
		imprimir(n, combinacion, 0);
		recorrer_digito(abc, digit_max, combinacion, n);
	}
	imprimir(n, combinacion, 1);
}

void	ft_print_combn(int n)
{
	if (n >= 1 && n <= 9)
	{
		combi(n);
	}
}
