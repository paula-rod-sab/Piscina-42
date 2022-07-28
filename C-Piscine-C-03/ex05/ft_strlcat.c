/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:53:48 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/21 17:13:48 by paurodri         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = ft_strlen(dest) + ft_strlen(src);
	if (size > (unsigned int) ft_strlen(dest))
	{
		ft_strncat(dest, src, (size - ft_strlen(dest) - 1));
	}
	else
	{
		count = count - (ft_strlen(dest) - size);
	}
	return (count);
}
