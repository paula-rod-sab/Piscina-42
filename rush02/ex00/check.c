/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero <mhornero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 01:20:18 by mhornero          #+#    #+#             */
/*   Updated: 2022/07/24 11:55:07 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	argv_is_correct(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (argv[argc - 1][i] != '\0')
	{
		if (is_num(argv[argc - 1][i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

char	*file_selector(char *str, int argc)
{
	if (argc == 3)
		return (str);
	return ("numbers.dict.txt");
}

int	check_arg(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc <= 1 || argc > 3)
		return (0);
	while (i < argc)
	{
		if (argv[i] == 0)
			return (0);
		i++;
	}
	i = 0;
	if (!argv_is_correct(argc, argv))
		return (0);
	return (1);
}

int	check_file(char *file)
{
	int	fd;

	fd = 0;
	if (!file)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	return (fd);
}
