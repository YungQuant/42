/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10repeatalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 22:18:41 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/12 23:24:04 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	char *str;
	char letter;
	int index;

	str = argv[1];
	while (str[i])
	{
		letter = str[i];
		if (letter >= 'a' && letter <= 'z')
		{
			index = letter - 'a' + 1;
			while (index)
			{	
				write(1, &letter, 1);
				index--;
			}
		}
		if (letter >= 'A' && letter <= 'Z')
		{
			index = letter - 'A' + 1;
			while (index)
			{
				write(1, &letter, 1);
				index--;
			}
		}
		i++;
	}
	return (0);
}
