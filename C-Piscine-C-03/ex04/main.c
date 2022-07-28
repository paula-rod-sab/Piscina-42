/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:40 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/21 17:21:56 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
  	char str1[20] = "hola que tal";
  	char str2[20] = "ue";

	printf("str1: %s \n", str1);
	printf("str2: %s \n", str2);
	
	char 	*i = strstr(str1, str2);
	printf("return func: %s \n", i);
	
  	char str3[20] = "hola que tal";
  	char str4[20] = "ue";

	printf("str3: %s \n", str3);
	printf("str4: %s \n", str4);
	
	char 	*j = ft_strstr(str3, str4);
	printf("return mia: %s \n", j);

	return (0);
}
