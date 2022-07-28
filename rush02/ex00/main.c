/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero <mhornero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:56:10 by mhornero          #+#    #+#             */
/*   Updated: 2022/07/24 11:55:49 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"
#include "dict.h"
#include "page.h"

int	main(int argc, char *argv[])
{
	t_dict	*dict;
	int		ret;
	int		fd;
	char	*file;

	dict = 0;
	fd = 0;
	if (check_arg(argc, argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	file = file_selector(argv[1], argc);
	ret = dict_read_num_entry(file);
	dict = dict_init(ret, file);
	if (!dict)
	{
		write(1, "Error\n", 6);
		dict_free(dict);
		return (0);
	}
	dict_free(dict);
}