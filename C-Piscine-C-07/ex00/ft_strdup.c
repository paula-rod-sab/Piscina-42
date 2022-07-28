/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:36:27 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/28 17:21:35 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
