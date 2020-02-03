/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_buff.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwessels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 13:59:46 by hwessels          #+#    #+#             */
/*   Updated: 2020/01/26 15:36:00 by hwessels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*get_buff(void)
{
	char	*buff;
	char	c;
	int		i;

	i = 0;
	buff = (char *)malloc(sizeof(char) * i + 1);
	while (read(0, &c, 1) != 0)
		buff[i++] = c;
	return (buff);
}
