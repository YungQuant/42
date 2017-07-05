/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:04:55 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/19 22:05:11 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t		ft_strlen(const char *str)
{
	size_t n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}