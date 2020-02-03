/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwessels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 14:02:48 by hwessels          #+#    #+#             */
/*   Updated: 2020/01/26 17:11:57 by hwessels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	*buff;
	int		x;
	int		y;

	buff = get_buff();
	y = get_y(buff);
	x = get_x(buff);
	if (y > 0 && x > 0)
		boxcheck(buff, x, y);
	if (y < 1 || x < 1)
		write(1, "any", 4);
	write(1, "\n", 1);
	return (0);
}
