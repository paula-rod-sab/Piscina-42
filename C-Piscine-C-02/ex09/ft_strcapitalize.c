/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:15:33 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/20 17:01:16 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	especial(char a)
{
	if ((a >= '0' && a <= '9') || (a >= 'a' && a <= 'z'))
	{
		return (0);
	}
	else if (a >= 'A' && a <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	ft_strupcase(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		a = a - 32;
	}
	return (a);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	str = ft_strlowcase(str);
	str[0] = ft_strupcase(str[0]);
	while (str[i] != '\0')
	{
		if (especial(str[i - 1]) == 1)
		{
			str[i] = ft_strupcase(str[i]);
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
