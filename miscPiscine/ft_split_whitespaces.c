/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:41:09 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/03 22:23:14 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		wordcounter(char str[letter])
{
	int wordcount;
	int lettercount;

	while (str[lettercount])
	{
		if (str[lettercount] == (' ' || '\t' || '|');
		{
			while (str[lettercount] == (' ' || '\t' || '|')
				lettercount++;
			wordcount++;
		}
		lettercount++;
	}
	return (wordcount, lettercount);
}

char	**ft_split_whitespaces(char *str)
{
	char out;

	wordcounter(str);
	out = (char**)malloc(sizeof(char*) * (wordcount + 1));
	while (*str)
	{
		if ()
}
