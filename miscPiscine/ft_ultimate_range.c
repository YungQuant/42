/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:02:27 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/03 17:30:06 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
		return (0);
	*range = (int*)malloc(sizeof(int) * (max - min));
	i = min;
	while (i < max)
	{
		*range[i - min] = i;
		i++;
	}
	return (**range);
}
