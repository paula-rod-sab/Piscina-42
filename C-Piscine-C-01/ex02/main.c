/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:40 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/18 12:41:33 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
	int n;
	int p;
	n = 25;
	p = 42;

	printf("n: %d\n", n);
	printf("p: %d\n", p);
	ft_swap(&n, &p);
	printf("n: %d\n", n);
	printf("p: %d\n", p);
	return (0);
}
