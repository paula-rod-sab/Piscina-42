/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:48:19 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/27 19:48:06 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb > 1)
	{
		if (nb == 2 || nb == 3 || nb == 5)
			return (1);
		if (((nb % 2) == 0) || ((nb % 5) == 0) || ((nb % 3) == 0))
			return (0);
		while (i <= (nb / i))
		{
			if (((nb % i) == 0))
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
