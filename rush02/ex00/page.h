/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   page.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero <mhornero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 04:37:54 by mhornero          #+#    #+#             */
/*   Updated: 2022/07/27 20:52:04 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PAGE_H

t_entry	*page_init(char *data, int size);

void	page_free(t_entry *page);

int		page_print(t_entry *p);

#endif
