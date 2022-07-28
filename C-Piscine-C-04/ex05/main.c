/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:16:19 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/26 18:23:03 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	printf("%d \n", ft_atoi_base("    \t     \n 3223", "0123456789abcdef"));
	printf("%d \n", ft_atoi_base(" 328", "0124356789"));
	printf("%d \n", ft_atoi_base("\n0110101", "01"));
}
