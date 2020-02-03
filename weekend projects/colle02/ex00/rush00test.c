/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwessels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 15:57:58 by hwessels          #+#    #+#             */
/*   Updated: 2020/01/26 16:38:25 by hwessels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		rush00check(char *s1, int x, int y)
{
	char	*ss[4];
	char	f[4];
	char	m[4];
	char	l[4];

	f[0] = 'o';
	m[0] = '|';
	l[0] = 'o';
	f[1] = '-';
	m[1] = ' ';
	l[1] = '-';
	f[2] = 'o';
	m[2] = '|';
	l[2] = 'o';
	ss[0] = f;
	ss[1] = m;
	ss[2] = l;
	if (rushtest(ss, x, s1, y) == 1)
		return (1);
	return (0);
}
