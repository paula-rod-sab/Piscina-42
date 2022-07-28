/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:16:54 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/27 17:58:55 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;
	int	mult;

	n = 0;
	mult = 0;
	if (nb <= 0)
		return (0);
	while (n <= nb && mult <= 46340)
	{
		n = mult * mult;
		if (n == nb)
			return (mult);
		mult++;
	}
	return (0);
}
