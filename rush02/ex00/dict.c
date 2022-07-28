/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero <mhornero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:24:02 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/24 11:37:40 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"
#include "page.h"

void	dict_free(t_dict *dict)
{
	int	i;

	i = 0;
	while (i < dict->num_entry)
	{
		page_free(dict->page[i]);
		i++;
	}
	free(dict);
}

t_dict	*dict_init(int ret, char *file)
{
	t_dict	*dict;
	t_entry	*p;
	int		fd;
	int		i;
	int		j;
	char	buff;
	char	data[1000];

	j = 0;
	dict = (t_dict *)malloc(sizeof(t_dict) * 1);
	if (!dict)
		return (0);
	dict->num_entry = ret;
	dict->page = (t_entry **)malloc(sizeof(t_entry *) * ret);
	if (!dict->page)
	{
		dict_free(dict);
		return (0);
	}
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		dict_free(dict);
		return (0);
	}
	p = (t_entry *)malloc(sizeof(t_entry));
	while (read(fd, &buff, 1) == 1)
	{
		if (buff != '\n')
		{
			data[i] = buff;
			i++;
		}
		else
		{
			data[i] = '\0';
			data[i + 1] = '\0';
			p = page_init(data, i);
			if (p)
				dict->page[j] = p;
			page_print(dict->page[j]);
			i = 0;
			j++;
			p = 0;
		}
	}
	close(fd);
	free(p);
	return (dict);
}

int	dict_read_num_entry(char *file)
{
	int		fd;
	int		ret;
	char	buff;

	ret = 0;
	if (!file)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	while (read(fd, &buff, 1))
	{
		if (buff == '\n')
			ret++;
	}
	close(fd);
	return (ret);
}

int	dict_print(t_dict *d)
{
	char	i;
	int		ret;

	if (!d)
		return (-1);
	i = '0';
	ret = 0;
	while (i - '0' < d->num_entry)
	{
		ret += page_print(d->page[i - '0']);
		i++;
	}
	return (ret);
}
