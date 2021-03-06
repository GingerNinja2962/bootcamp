/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwessels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 14:41:54 by hwessels          #+#    #+#             */
/*   Updated: 2020/01/28 15:11:22 by hwessels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while ((argv[1][i] == ' ' || argv[1][i] == '	') && argv[1][i])
			i++;
		while (argv[1][i])
		{
			while (argv[1][i] != ' ' && argv[1][i] != '	' && argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			if (argv[1][i] == '	' || argv[1][i] == ' ')
			{
				while ((argv[1][i] == '	' || argv[1][i] == ' ') && argv[1][i])
					i++;
				if (argv[1][i])
					write(1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
