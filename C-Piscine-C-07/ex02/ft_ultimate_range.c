/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:50:10 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/28 18:05:40 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (NULL);
	}
	len = max - min;
	*range = (int *) malloc(sizeof(int) * len);
	if (*range == NULL)
		return (-1);
	while (i < len)
	{
		*range[i] = min;
		min++;
		i++;
	}
	return (len);
}
