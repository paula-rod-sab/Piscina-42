/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:24:32 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/27 20:28:35 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb);

int main()
{
	// max - 12
	printf("-1! = %d \n",ft_iterative_factorial(-1));
	printf("0!  = %d \n",ft_iterative_factorial(0));
	printf("1!  = %d \n",ft_iterative_factorial(1));
	printf("2!  = %d \n",ft_iterative_factorial(2));
	printf("3!  = %d \n",ft_iterative_factorial(3));
	printf("4!  = %d \n",ft_iterative_factorial(4));
	printf("5!  = %d \n",ft_iterative_factorial(5));
	printf("6!  = %d \n",ft_iterative_factorial(6));
	printf("7!  = %d \n",ft_iterative_factorial(7));
	printf("8!  = %d \n",ft_iterative_factorial(8));
	printf("9!  = %d \n",ft_iterative_factorial(9));
	printf("10! = %d \n",ft_iterative_factorial(10));
	printf("11! = %d \n",ft_iterative_factorial(11));
	printf("12! = %d \n",ft_iterative_factorial(12));
	return (0);
}
