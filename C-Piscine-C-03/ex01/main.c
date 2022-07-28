/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:40 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/22 13:44:47 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	int n = 5;
  	char str1[20] = "holaF";
  	char str2[20] = "holag";

	int i = strncmp(str1, str2, n);
	int j = ft_strncmp(str1, str2, n);
	printf("str1: %s \n", str1);
	printf("str2: %s \n", str2);
	printf("return func: %d \n", i);
	printf("return mia: %d \n", j);

	return (0);
}
