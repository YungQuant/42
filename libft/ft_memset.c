/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 12:55:40 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/19 22:45:22 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	cp;

	i = 0;
	if (len == 0)
		return (b);
	cp = c;
	while (i < (int)len)
	{
		((char *)b)[i] = cp;
		i++;
	}
	return (b);
}
