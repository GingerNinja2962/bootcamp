/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boxcheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwessels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 16:42:09 by hwessels          #+#    #+#             */
/*   Updated: 2020/01/26 17:12:36 by hwessels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	boxcheck(char *buff, int x, int y)
{
	int i;

	i = 0;
	if (rush00check(buff, x, y) == 0)
	{
		i++;
		print00(x, y);
	}
	if (rush01check(buff, x, y) == 0)
	{
		i++;
		if (i > 1)
			write(1, " || ", 4);
		print01(x, y);
	}
	if (rush02check(buff, x, y) == 0)
	{
		i++;
		if (i > 1)
			write(1, " || ", 4);
		print02(x, y);
	}
	if (rush03check(buff, x, y) == 0)
	{
		i++;
		if (i > 1)
			write(1, " || ", 4);
		print03(x, y);
	}
	if (rush04check(buff, x, y) == 0)
	{
		i++;
		if (i > 1)
			write(1, " || ", 4);
		print04(x, y);
	}
}
