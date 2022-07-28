/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:40 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/18 12:26:54 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main()
{
	int *********p_nbr;
	int ********p_nbr2;
	int *******p_nbr3;
	int ******p_nbr4;
	int *****p_nbr5;
	int ****p_nbr6;
	int ***p_nbr7;
	int **p_nbr8;
	int *p_nbr9;
	int n;

	n = 25;
	p_nbr9 = &n;
	p_nbr8 = &p_nbr9;
	p_nbr7 = &p_nbr8;
	p_nbr6 = &p_nbr7;
	p_nbr5 = &p_nbr6;
	p_nbr4 = &p_nbr5;
	p_nbr3 = &p_nbr4;
	p_nbr2 = &p_nbr3;
	p_nbr = &p_nbr2;

	printf("%d\n", n);
	ft_ultimate_ft(p_nbr);
	printf("%d\n", n);
	return (0);
}
