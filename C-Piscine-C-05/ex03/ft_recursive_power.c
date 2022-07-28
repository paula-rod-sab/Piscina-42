/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:17:00 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/27 16:27:32 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	salida;

	salida = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	salida = nb * ft_recursive_power(nb, power - 1);
	return (salida);
}
