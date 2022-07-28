/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   page.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero <mhornero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 04:34:14 by mhornero          #+#    #+#             */
/*   Updated: 2022/07/24 10:48:38 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

void	page_free(t_entry *page)
{
	free(page->key);
	free(page->value);
	free(page);
}

t_entry	*page_init(char *data, int size)
{
	t_entry	*page;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!data)
		return (0);
	page = (t_entry *)malloc(sizeof(t_entry));
	page->key = (char *)malloc(sizeof(char) * (size+1));
	page->value = (char *)malloc(sizeof(char) * (size+1));
	if (!page->key || !page->value)
	{
		page_free(page);
		return (0);
	}
	while (data[i] != ':' && data[i] != ' ' && i < size)
	{
		page->key[i] = data[i];
		i++;
	}
	page->key[i] = '\0';
	page->key_len = i;
	while ((data[i] == ' ' || data[i] == ':') && i < size)
		i++;
	while (data[i] != '\0' && i < size)
	{
		page->value[j] = data[i];
		i++;
		j++;
	}
	page->val_len = j;
	page->value[j] = '\0';
	return (page);
}

int	page_print(t_entry *p)
{
	int	ret;

	if (!p)
		return (-1);
	ret = 0;
	ret += write(1, p->key, ft_strlen(p->key));
	ret += write(1, " : ", 3);
	ret += write(1, p->value, ft_strlen(p->value));
	ret += write(1, "\n", 1);
	return (ret);
}
