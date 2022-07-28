/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:24:32 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/27 17:57:49 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb);

int main()
{
	int	i;

	i = -5;
	while (i <= 25)
	{
		printf("raiz de: %d --> %d \n", i, ft_sqrt(i));;
		i++;
	}
	printf("raiz de: %d --> %d \n", 2147483647, ft_sqrt(2147483647));
	printf("raiz de: %ld --> %d \n", -2147483648, ft_sqrt(-2147483648));
	return (0);
}
