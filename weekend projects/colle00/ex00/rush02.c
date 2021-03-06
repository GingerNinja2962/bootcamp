/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwessels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 12:02:04 by hwessels          #+#    #+#             */
/*   Updated: 2020/01/12 14:03:49 by hwessels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_middleline(int y, int x, int x2)
{
	while (y > 2)
	{
		ft_putchar('B');
		while (x > 2)
		{
			ft_putchar(' ');
			x--;
		}
		if (x == 2)
			ft_putchar('B');
		ft_putchar('\n');
		y--;
		x = x2;
	}
}

void	ft_firstline(int x, int x2)
{
	ft_putchar('A');
	while (x > 2)
	{
		ft_putchar('B');
		x--;
	}
	if (x > 1)
		ft_putchar('A');
	ft_putchar('\n');
	x = x2;
}

void	ft_lastline(int x, int x2)
{
	ft_putchar('C');
	while (x > 2)
	{
		ft_putchar('B');
		x--;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
	x = x2;
}

int		rush(int x, int y)
{
	int x2;

	x2 = x;
	if (x < 1 || y < 1)
		return (0);
	if (y > 0)
		ft_firstline(x, x2);
	if (y == 2)
		ft_lastline(x, x2);
	if (y > 2)
	{
		ft_middleline(y, x, x2);
		ft_lastline(x, x2);
	}
	return (0);
}
