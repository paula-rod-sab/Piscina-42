/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:40 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/21 19:18:47 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main()
{
  	char str1[20] = "hola";
  	char str2[20] = "holA";

	int i = strcmp(str1, str2);
	int j = ft_strcmp(str1, str2);
	printf("str1: %s \n", str1);
	printf("str2: %s \n", str2);
	printf("return func: %d \n", i);
	printf("return mia: %d \n", j);

	return (0);
}
