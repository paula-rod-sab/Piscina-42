/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:22:28 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/28 17:47:30 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int	*array;
	int	len;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	array = (int *) malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	while (i < len)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
