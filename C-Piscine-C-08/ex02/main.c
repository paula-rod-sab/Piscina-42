/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:58:16 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/27 21:56:17 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	int i = -10;
	while (i <= 10)
	{
		printf("%d \n", ABS(i));
		i++;
	}
	return (0);
}
