/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:40 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/18 12:51:58 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int n;
	int p;
	int div;
	int mod;

	n = 42;
	p = 11;

	ft_div_mod(n, p, &div, &mod);
	printf("n: %d\n", n);
	printf("p: %d\n", p);
	printf("div: %d\n", div);
	printf("mod: %d\n", mod);
	return (0);
}
