/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:40 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/20 18:22:24 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main()
{
	char str[200] = "][]salut, comMent t;u vas ? 42mots qua:rante-deux; cinquante+et+un";
	printf("inicial:  %s \n", str);
	printf("post-funcion: %s \n", ft_strcapitalize(str));
	
	return (0);
}
