/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:20:43 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/23 12:10:09 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char		*setstring(char *string, const char *s, int i, int k)
{
	int iter;

	iter = 0;
	while (i < k)
	{
		string[iter] = s[i];
		i++;
		iter++;
	}
	return (string);
}

char			*ft_strtrim(const char *s)
{
	int		i;
	int		iter;
	int		k;
	char	*string;

	i = 0;
	iter = 0;
	if (!s)
		return (NULL);
	k = ft_strlen((char*)s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (&((char*)s)[i]);
	while (s[k - 1] == ' ' || s[k - 1] == '\n' || s[k - 1] == '\t')
		k--;
	string = malloc(sizeof(char) * (k - i) + 1);
	if (!string)
		return (NULL);
	string[k - i] = '\0';
	return (setstring(string, s, i, k));
}
