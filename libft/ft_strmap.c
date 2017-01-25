/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:05:54 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/19 22:47:50 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	char	*newstr;

	if (s)
	{
		i = ft_strlen(s);
		newstr = ft_strnew(i);
		if (!newstr)
			return (NULL);
		i = 0;
		while (*s)
		{
			newstr[i] = f(*s++);
			i++;
		}
		return (newstr);
	}
	return (NULL);
}
