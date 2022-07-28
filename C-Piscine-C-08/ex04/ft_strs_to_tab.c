/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 22:04:22 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/28 12:54:01 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*salida;
	int		i;

	i = 0;
	salida = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (salida == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		salida[i] = src[i];
		i++;
	}
	salida[i] = '\0';
	return (salida);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ptr;

	i = 0;
	ptr = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < ac)
	{
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].str = ft_strdup(av[i]);
		ptr[i].copy = ft_strdup(av[i]);
		i++;
	}
	ptr[i].str = NULL;
	return (ptr);
}
