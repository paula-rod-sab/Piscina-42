/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:58:27 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/26 16:49:32 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ckeck_str(char *str, int *ptr)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	*ptr = i;
	return (count);
}

int	obtener_numero(char a, char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == a)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	num;
	int	num2;
	int	neg;
	int	len;

	i = 0;
	num = 0;
	len = check_base(base);
	if (len > 1)
	{	
		neg = ckeck_str(str, &i);
		num2 = obtener_numero(str[i], base);
		while (num2 != -1)
		{
			num = (num * len) + num2;
			i++;
			num2 = obtener_numero(str[i], base);
		}
		return (num * neg);
	}
	return (0);
}
