/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:00:25 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/19 22:47:26 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	str[ft_strlen(s1)] = '\0';
	if (!str)
		return (NULL);
	while (i < (int)ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
