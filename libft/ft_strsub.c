/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 14:21:04 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/19 22:53:19 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * len + 1);
	if (!s || !str)
		return (NULL);
	str[len] = '\0';
	i = 0;
	while (i < (int)len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	return (str);
}
