/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:40 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/21 19:29:12 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	unsigned int size = 7;
  	char str1[20] = "hola";
  	char str2[20] = "sdfg";

	printf("str1: %s \n", str1);
	printf("str2: %s \n", str2);
	
	unsigned int i = strlcat(str1, str2, size);
	printf("return func: %d \n", i);
	printf("str1 post funct: %s \n", str1);
	
  	char str3[20] = "hola";
  	char str4[20] = "sdfg";

	printf("str3: %s \n", str3);
	printf("str4: %s \n", str4);
	
	unsigned int j = ft_strlcat(str3, str4, size);
	printf("return mia: %d \n", j);
	printf("str3 post funct: %s \n", str3);

	return (0);
}
