/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhornero <mhornero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 04:33:12 by mhornero          #+#    #+#             */
/*   Updated: 2022/07/24 11:14:58 by mhornero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include "types.h"
# include "general.h"

int		is_num(char c);

int		argv_is_correct(int argc, char *argv[]);

int		check_arg(int argc, char *argv[]);

int		check_file(char *file);

char	*file_selector(char *str, int argc);

#endif
