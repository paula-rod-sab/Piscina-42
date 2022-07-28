/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:40 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/18 17:00:36 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
	int tab[6] = {1, 8, 3, 4, 5, 6};

	for(int i = 0; i<6; i++)
	{
		printf("%d", tab[i]);
	}
	
	printf("\n");
	
	ft_rev_int_tab(tab, 6);
	
	for(int i = 0; i<6; i++)
	{
		printf("%d", tab[i]);
	}

	return (0);
}
