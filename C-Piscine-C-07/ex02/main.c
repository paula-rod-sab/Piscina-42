/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:23:01 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/28 18:09:48 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int	main()
{
	int i = 0;
	int min = 2147483640;
	int max = 2147483647;
	int size = max - min;
	int **array;
	int tam;

	tam = ft_ultimate_range(array, min, max)
	while (i < size)
	{
		printf("%d \n", *array[i]);
		i++;
	}
}
