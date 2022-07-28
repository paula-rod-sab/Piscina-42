/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:43:50 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/21 15:50:30 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + c] == to_find[c] && to_find[c] != '\0')
		{
			if ((c + 1) == ft_strlen(to_find))
			{
				return (&str[i]);
			}
			c++;
		}
		c = 0;
		i++;
	}
	return (0);
}
