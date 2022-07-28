/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:15:41 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/25 16:08:55 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_num(char a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}

int	count_neg(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == ' ')
		i++;
	while (str[i] != '\0' && is_num(str[i]) == 0)
	{
		if (str[i] != '-' && str[i] != '+')
			return (-1);
		if (str[i] == '-')
			count++;
		i++;
	}
	return (count);
}

int	atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0' && is_num(str[i]) == 0)
		i++;
	while (str[i] != '\0' && is_num(str[i]) == 1)
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	result;
	int	neg;

	result = atoi(str);
	neg = count_neg(str);
	if (neg == -1)
		return (0);
	if (neg % 2 != 0)
		result = result * -1;
	return (result);
}
