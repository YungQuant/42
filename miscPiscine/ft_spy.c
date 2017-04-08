/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:56:57 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/04 16:36:53 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		noncasecmp(char c1, char c2)
{
	if (c1 == c2 || c1 == c2 + 'a' - 'A' || c1 == c2 + 'A' - 'a')
		return (1);
	else
		return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ss(char *str, char *to_find)
{
	int i;
	int j;
	int str_length;
	int tof_length;

	i = 0;
	str_length = ft_strlen(str);
	tof_length = ft_strlen(to_find);
	if (tof_length == 0)
		return (0);
	while (i < str_length - tof_length + 1)
	{
		j = 0;
		while (j < tof_length)
		{
			if (!noncasecmp(str[i + j], to_find[j]))
				break ;
			if (j == tof_length - 1)
				return (i);
			j++;
		}
		i++;
	}
	return (-1);
}

int		check(char *str, char *to_find)
{
	int i;
	int st;
	int ed;

	i = 0;
	if (ss(str, to_find) == -1)
		return (0);
	st = ss(str, to_find);
	ed = st + ft_strlen(to_find);
	while (str[i])
	{
		if (i >= st && i < ed)
		{
			i++;
			continue ;
		}
		if (str[i] != ' ' && str[i] != '\t')
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	char	*w1;
	char	*w2;
	char	*w3;
	int		i;

	i = 1;
	w1 = "president";
	w2 = "attack";
	w3 = "Powers";
	while (i < argc)
	{
		if (check(argv[i], w1) || check(argv[i], w2) || check(argv[i], w3))
		{
			write(1, "Alert!!!\n", 9);
			break ;
		}
		i++;
	}
	return (0);
}
