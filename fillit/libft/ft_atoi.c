/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 12:45:34 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/23 12:10:40 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*helpfunc(const char *str)
{
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '+')
		str++;
	while (*str == '-')
		str++;
	return (str);
}

int					ft_atoi(const char *str)
{
	int		i;
	int		neg;
	char	*s;

	neg = 0;
	i = 0;
	str = helpfunc(str);
	s = (char *)str;
	if (str[-1] == '-')
		neg = 1;
	if ('*str' == 2147483647)
		return (i = -2147483648);
	while (*s && *s >= '0' && *s <= '9')
	{
		i = i * 10 + (*s - 48);
		s++;
	}
	if (neg == 1)
		i = (i * -1);
	return (i);
}
