/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:40 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/20 17:57:02 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
  	char str1[20] = "hola - ds -2";
  	char str2[20] = "dsakldhfioi";


	int i = strlcpy(str2, str1, 3);
	printf("str2: %s \n", str2);
	printf("size: %d \n", i);


  	char str3[20] = "hola - ds -2";
  	char str4[20] = "dsakldhfioi";

	int j = ft_strlcpy(str4, str3, 3);

	printf("str2: %s \n", str4);
	printf("size: %d \n", j);

	return (0);
}
