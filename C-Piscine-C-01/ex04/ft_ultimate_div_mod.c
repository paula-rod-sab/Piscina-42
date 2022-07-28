/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:55:18 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/18 17:03:48 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_div;
	int	tmp_mod;

	if (*b != 0)
	{
		tmp_div = *a / *b;
		tmp_mod = *a % *b;
		*a = tmp_div;
		*b = tmp_mod;
	}
}
