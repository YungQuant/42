/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:13:08 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/24 16:36:15 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return (char *)&s[i];
		i--;
	}
	return (NULL);
}
