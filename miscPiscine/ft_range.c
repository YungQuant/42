/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:04:11 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/03 21:57:57 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *r;

	if (min >= max)
		return (0);
	r = (int*)malloc(sizeof(int) * (max - min));
	i = min;
	while (i < max)
	{
		r[i - min] = i;
		i++;
	}
	return (r);
}
