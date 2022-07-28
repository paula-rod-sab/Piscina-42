/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:24:32 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/27 18:44:08 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb);

int main()
{
	int	i;

	i = -5;
	while (i <= 200)
	{
		if (ft_is_prime(i) == 1)
			printf("Primo: %d \n", i);
		i++;
	}
	printf("Primo: %d, %d \n", 2147483647, ft_is_prime(2147483647));
	printf("Primo: %d, %d \n", -2147483647, ft_is_prime(-2147483647));
	return (0);
}
