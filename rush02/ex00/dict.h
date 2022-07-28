/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero <mhornero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 03:22:14 by mhornero          #+#    #+#             */
/*   Updated: 2022/07/24 11:28:15 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H

void	dict_free(t_dict *dict);

t_dict	*dict_init(int ret, char *file);

int	    dict_read_num_entry(char *file);

int     dict_print(t_dict *d);

#endif
