/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:17:46 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/27 15:05:07 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	n;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	n = nb * ft_recursive_factorial(nb - 1);
	return (n);
}
