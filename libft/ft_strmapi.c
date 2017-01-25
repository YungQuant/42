/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:08:03 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/19 22:52:05 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*newstr;

	if (s)
	{
		i = 0;
		newstr = ft_strnew(ft_strlen(s));
		if (!newstr)
			return (NULL);
		while (s[i])
		{
			newstr[i] = f(i, s[i]);
			i++;
		}
		return (newstr);
	}
	return (NULL);
}
