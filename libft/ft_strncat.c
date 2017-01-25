/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 12:44:53 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/22 19:23:02 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int dlen;
	int slen;
	int i;

	i = 0;
	dlen = ft_strlen(s1);
	slen = ft_strlen(s2);
	while (dlen < (dlen + slen) && (int)n > 0)
	{
		s1[dlen] = s2[i];
		dlen++;
		slen--;
		i++;
		n--;
	}
	s1[dlen] = '\0';
	return (s1);
}
