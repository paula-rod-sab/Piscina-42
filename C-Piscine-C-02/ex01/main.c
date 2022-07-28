/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:40 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/20 12:10:02 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
  	char str1[20] = "hola";
  	char str2[20] = "";

	strncpy(str2, str1, 3);
	printf("str2: %s \n", str2);
	
	
  	char str3[20] = "hola";
  	char str4[20] = "";
	
	ft_strncpy(str4, str3, 3);

	printf("str2: %s \n", str4);
	
	return (0);
}
