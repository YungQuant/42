/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:10:25 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/18 14:42:52 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(src);
	if (len > (int)n)
		ft_memcpy(dest, src, n);
	else
	{
		ft_memcpy(dest, src, len);
		ft_memset(dest + len, '\0', n - len);
	}
	return (dest);
}
