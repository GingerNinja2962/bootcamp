/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_x.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwessels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 14:48:51 by hwessels          #+#    #+#             */
/*   Updated: 2020/01/26 14:29:17 by hwessels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_x(char *buff)
{
	int x;

	x = 0;
	while (buff[x] != '\n' && buff[x] != 0)
	{
		x++;
	}
	return (x);
}