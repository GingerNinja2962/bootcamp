/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushtest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwessels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 13:19:24 by hwessels          #+#    #+#             */
/*   Updated: 2020/01/26 17:08:32 by hwessels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		rushtest(char **ss, int x, char *s1, int y)
{
	int xt;

	xt = x;
	if (checkline(ss[0], x, s1, xt) == 1)
		return (1);
	xt++;
	y--;
	while (y > 1)
	{
		xt = (xt + x);
		if (checkline(ss[1], x, s1, xt) == 1)
			return (1);
		y--;
		xt++;
	}
	xt = (xt + x);
	if (y < 1)
		return (0);
	if (checkline(ss[2], x, s1, xt) == 1)
		return (1);
	return (0);
}
