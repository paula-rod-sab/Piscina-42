/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paurodri <paurodri@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:17:51 by paurodri          #+#    #+#             */
/*   Updated: 2022/07/09 17:22:10 by paurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	head(int ancho, int isheader);
void	middle(int a, int b);
void	relleno_ast(int long_ast);

void	rush(int a, int b)
{	
	if (a > 0 && b > 0)
	{
		head(a, 0);
		if (b != 1)
		{
			middle(a, b);
			head(a, 1);
		}
	}
}

void	middle(int a, int b)
{
	int	long_filas;
	int	long_ast;
	int	n;
	int	j;

	long_filas = b - 2;
	long_ast = a - 2;
	n = 0;
	j = 0;
	while (j < long_filas)
	{
		ft_putchar('*');
		if (a != 1)
		{
			while (n < long_ast)
			{
				ft_putchar(' ');
				n++;
			}
			ft_putchar('*');
		n = 0;
		}
		ft_putchar('\n');
		j++;
	}	
}

void	head(int ancho, int isheader)
{
	int	long_ast;

	long_ast = ancho - 2;
	if (isheader == 0)
	{
		ft_putchar('/');
		if (ancho != 1)
		{
			relleno_ast(long_ast);
			ft_putchar('\\');
		}
	}
	else
	{
		ft_putchar('\\');
		if (ancho != 1)
		{
			relleno_ast(long_ast);
			ft_putchar('/');
		}	
	}
	ft_putchar('\n');
}

void	relleno_ast(int long_ast)
{
	int	n;

	n = 0;
	while (n < long_ast)
	{
		ft_putchar('*');
		n++;
	}
}
