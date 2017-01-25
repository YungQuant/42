/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 12:52:15 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/19 22:06:25 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	int *p;
	int i;
	int k;

	p = (int *)malloc(sizeof(int *) * size);
	if (!p)
		return (NULL);
	i = 0;
	k = 0;
	while (i < (int)size)
	{
		p[i] = k;
		i++;
	}
	return (p);
}
