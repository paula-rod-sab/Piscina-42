/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:40 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/21 17:20:55 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	int n = 3;
  	char str1[20] = "hola";
  	char str2[20] = "adios";

	printf("str1: %s \n", str1);
	printf("str2: %s \n", str2);
	
	char 	*i = strncat(str1, str2, n);
	printf("return func: %s \n", i);
	
  	char str3[20] = "hola";
  	char str4[20] = "adios";

	printf("str3: %s \n", str3);
	printf("str4: %s \n", str4);
	
	char 	*j = ft_strncat(str3, str4, n);
	printf("return mia: %s \n", j);

	return (0);
}
