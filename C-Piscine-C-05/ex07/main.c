/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:24:32 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/27 19:48:15 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_find_next_prime(int nb);

int main()
{
	int	i;

	i = -5;
	while (i <= 200)
	{
		printf("next prime: %d --> %d \n", i, ft_find_next_prime(i));
		i++;
	}
	printf("next prime: %d --> %d \n", 2147483647, ft_find_next_prime(2147483647));
	printf("next prime: %ld --> %d \n", -2147483648, ft_find_next_prime(-2147483648));
	return (0);
}
