/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 12:53:28 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/18 14:09:28 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < (int)n)
		{
			if (((unsigned char*)s)[i] == (unsigned char)c)
				return ((char*)&s[i]);
			i++;
		}
	}
	return (0);
}
