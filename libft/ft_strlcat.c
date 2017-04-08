/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:03:39 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/18 18:43:17 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dstlen;
	size_t srclen;
	size_t i;

	if (!size || size == 0)
		return ('\0');
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	while (src[i] && (dstlen + i) < size - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (srclen + ((dstlen < size) ? dstlen : size));
}
