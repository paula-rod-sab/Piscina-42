/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:40 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/18 17:27:55 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
	int n = 8;

    int tab[8] = {222, 6, 4, 7, 7, 1, -3, 10};

	for(int i = 0; i<n; i++)
	{
		printf("%d ", tab[i]);
	}
	
	printf("\n");
	
	ft_sort_int_tab(tab, n);
	
	for(int i = 0; i<n; i++)
	{
		printf("%d ", tab[i]);
	}

	return (0);
}
