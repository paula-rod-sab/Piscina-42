/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero <mhornero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 06:33:20 by mhornero          #+#    #+#             */
/*   Updated: 2022/07/24 11:05:47 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H

typedef struct entry
{
	char	*key;
	char	*value;
	int		key_len;
	int		val_len;
}	t_entry;

typedef struct dict
{
	int		num_entry;
	t_entry	**page;
}	t_dict;

#endif
