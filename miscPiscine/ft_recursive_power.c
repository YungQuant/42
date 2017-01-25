/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 10:16:16 by dlemp             #+#    #+#             */
/*   Updated: 2016/10/29 22:08:21 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_recursive_power(int nb, int power)
{
	int power2;

	power2 = power;
	if (nb == 0 || power == 0)
		return (0);
	while (power2 <= power && power2 >= 1)
		return (nb * ft_recursive_power(nb, power -= 1));
}
