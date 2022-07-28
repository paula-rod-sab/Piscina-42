/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:40:43 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/28 12:15:21 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_str.h"

t_stock_str *ft_strs_to_tab(int ac, char **av);

int main(int argc, char **argv)
{
	t_stock_str *ptr;
	ptr = ft_strs_to_tab(argc, argv);

	int	i = 0;
	while (i < argc)
	{
		printf("%d \n", i);
		printf("size: %d \n", ptr[i].size);
		printf("str: %s \n", ptr[i].str);
		printf("copy: %s \n\n", ptr[i].copy);
		i++;
	}
	return (0);
}
