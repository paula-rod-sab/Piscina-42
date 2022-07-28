/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:40 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/18 16:54:53 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int n;
	int p;

	n = 42;
	p = 10;

	printf("n: %d\n", n);
	printf("p: %d\n", p);
	ft_ultimate_div_mod(&n, &p);
	printf("n: %d\n", n);
	printf("p: %d\n", p);
	
	return (0);
}
