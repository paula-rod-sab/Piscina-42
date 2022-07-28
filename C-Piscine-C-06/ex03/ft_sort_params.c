/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:46:08 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/26 20:50:38 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	dif;

	i = 0;
	dif = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	dif = s1[i] - s2[i];
	return (dif);
}

void	sort_par(int argc, char **argv)
{
	int		count;
	int		i;
	char	*tmp;

	count = 1;
	while (count > 0)
	{
		i = 1;
		count = 0;
		while (i < (argc - 1))
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				count++;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int		i;

	i = 1;
	sort_par(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
