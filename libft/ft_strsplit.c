/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:18:48 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/23 12:09:34 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char		*ft_helpsplit(char *swi, const char *s, int i, int wl)
{
	int lditer;
	int liter;

	liter = i - wl;
	lditer = 0;
	while (lditer <= wl)
	{
		swi[lditer] = s[liter];
		lditer++;
		liter++;
	}
	return (swi);
}

static char		**ft_splitter(const char *s, char **ss, int i, char c)
{
	int wl;
	int wi;

	wi = 0;
	wl = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\0')
			return (NULL);
		if (s[i] != c && s[i + 1] != c && s[i + 1] != '\0')
			wl++;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			ss[wi] = ft_strnew((size_t)wl - 1);
			ss[wi] = ft_helpsplit(ss[wi], s, i, wl);
			wi++;
			wl = 0;
		}
		i++;
	}
	return (ss);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		wordcount;
	char	**strings;

	i = 0;
	wordcount = 0;
	if (!s)
		return (NULL);
	wordcount = ft_wordcount((char *)s, c);
	strings = (char **)malloc(sizeof(char**) * wordcount + 1);
	if (strings == NULL)
		return (NULL);
	strings[wordcount] = NULL;
	while (s[i] == c)
		i++;
	return (ft_splitter(s, strings, i, c));
}
