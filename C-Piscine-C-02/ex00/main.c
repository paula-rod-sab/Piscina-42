/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:40 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/20 12:08:43 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
  	char str1[20] = "hola";
  	char str2[20] = "a c e s f c s";

	strcpy(str2, str1);
	printf("str2: %s \n", str2);
	
  	char str3[20] = "hola";
  	char str4[20] = "a c e s f c s";

	ft_strcpy(str4, str3);
	printf("str2: %s \n", str4);
	
	return (0);
}
