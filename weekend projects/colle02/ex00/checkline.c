/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkline.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwessels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 09:52:12 by hwessels          #+#    #+#             */
/*   Updated: 2020/01/26 16:54:51 by hwessels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		checkline(char *line, int x, char *s, int len)
{
	int j;
	int t;

	t = (len - x);
	j = (len - 1);
	if (s[t] != line[0])
		return (1);
	t++;
	while (t < j)
	{
		if (s[t] != line[1])
			return (1);
		if (s[t] == line[1])
			t++;
	}
	if (s[t] != line[2] && t != len)
		return (1);
	return (0);
}
