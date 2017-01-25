/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:03:25 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/23 12:10:56 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char		*joind(char *string, const char *s2, int i, int lentot)
{
	int	k;

	k = 0;
	while (k < lentot)
	{
		string[i] = (char)s2[k];
		i++;
		k++;
	}
	string[lentot] = '\0';
	return (string);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		lentot;
	int		i;
	char	*string;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		lentot = len1 + len2;
		string = malloc(sizeof(char) * lentot + 1);
		if (!string)
			return (NULL);
		i = 0;
		while (s1[i])
		{
			string[i] = (char)s1[i];
			i++;
		}
		return (joind(string, s2, i, lentot));
	}
	return (NULL);
}
