/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:40:43 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/28 14:49:29 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void ft_show_tab(struct s_stock_str *par);
t_stock_str *ft_strs_to_tab(int ac, char **av);

int main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));

	return (0);
}
