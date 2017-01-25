/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 12:55:06 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/18 14:42:27 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int i;

	i = 0;
	if (len > 0)
	{
		if (dst >= src)
		{
			i = len - 1;
			while (i >= 0)
			{
				((char *)dst)[i] = ((char*)src)[i];
				i--;
			}
		}
		else
		{
			while (i < (int)len)
			{
				((char *)dst)[i] = ((char *)src)[i];
				i++;
			}
		}
	}
	return (dst);
}
