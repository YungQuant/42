/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:11:30 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/19 22:49:07 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*p;
	int		i;

	if ((p = malloc(sizeof(char) * size + 1)))
	{
		i = 0;
		while (i < (int)size)
		{
			p[i] = 0;
			i++;
		}
		p[size] = '\0';
		return (p);
	}
	else
		return (NULL);
}
