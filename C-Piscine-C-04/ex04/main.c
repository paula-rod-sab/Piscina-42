/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:16:19 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/26 18:33:30 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	int nbr = -42;
	ft_putnbr_base(nbr, "012");
}
