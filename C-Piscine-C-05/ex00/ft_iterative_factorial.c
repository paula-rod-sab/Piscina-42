/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:23:57 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/27 15:04:26 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	n = nb - 1;
	while (n > 0)
	{
		nb = nb * n;
		n--;
	}
	return (nb);
}
