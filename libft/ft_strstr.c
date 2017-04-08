/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 12:44:35 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/24 19:24:06 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int litlen;

	if (*little == '\0')
		return (char *)big;
	litlen = (int)ft_strlen(little);
	i = 0;
	while (*big)
	{
		while (*big == little[i] && litlen > i)
		{
			i++;
			big++;
		}
		if (i == litlen)
			return ((char *)big - litlen);
		else
			big -= i;
		i = 0;
		big++;
	}
	return (NULL);
}
