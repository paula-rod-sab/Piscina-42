/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:24:32 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/27 14:10:06 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main()
{
	printf("-10^5 = %d \n", ft_iterative_power(-10, 5));
	printf("-10^4 = %d \n", ft_iterative_power(-10, 4));
	printf("-10^3 = %d \n", ft_iterative_power(-10, 3));
	printf("-10^2 = %d \n", ft_iterative_power(-10, 2));
	printf("10^-1 = %d \n", ft_iterative_power(10, -1));
	printf("2^-5  = %d \n", ft_iterative_power(2, -5));
	printf("10^0  = %d \n", ft_iterative_power(10, 0));
	printf("0^0   = %d \n", ft_iterative_power(0, 0));
	printf("0^3   = %d \n", ft_iterative_power(0, 3));
	printf("2^0   = %d \n", ft_iterative_power(2, 0));
	printf("2^3   = %d \n", ft_iterative_power(2, 3));
	printf("-2^3  = %d \n", ft_iterative_power(-2, 3));
	printf("2^-3  = %d \n", ft_iterative_power(2, -3));
	printf("10^1  = %d \n", ft_iterative_power(10, 1));
	printf("10^2  = %d \n", ft_iterative_power(10, 2));
	printf("10^3  = %d \n", ft_iterative_power(10, 3));
	printf("10^4  = %d \n", ft_iterative_power(10, 4));
	printf("10^5  = %d \n", ft_iterative_power(10, 5));
	printf("10^6  = %d \n", ft_iterative_power(10, 6));
	printf("10^7  = %d \n", ft_iterative_power(10, 7));
	printf("10^8  = %d \n", ft_iterative_power(10, 8));
	printf("10^9  = %d \n", ft_iterative_power(10, 9));
	printf("7^8   = %d \n", ft_iterative_power(7, 8));
	return (0);
}
