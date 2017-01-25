/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 21:35:40 by dlemp             #+#    #+#             */
/*   Updated: 2016/10/29 21:56:54 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_iterative_power(int nb, int power)
{
	int power2;

	power2 = 1;
	if (power <= 0)
		return (0);
	while (power2 <= power && power2 >= 1)
	{
		nb *= nb;
		power2++;
	}
	return (nb);
}
