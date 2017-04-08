/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:22:13 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/03 15:53:08 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		lencount(char *argv)
{
	int len;

	len = 0;
	while (argv[len])
		len++;
	return (len);
}

void	copyto(char *i, char *argv)
{
	int count;

	count = 0;
	while (argv[count] != '\0')
	{
		i[count] = argv[count];
		count++;
	}
}

char	*ft_strdup(char *argv)
{
	char *i;
	int srcsize;

	srcsize = lencount(argv);
	i = (char*)malloc(sizeof(char) * (srcsize + 1));
	copyto(i, argv);
	return (i);
}

int		main(int argc, char **argv)
{
	ft_strdup(*argv);
	return (0);
}
