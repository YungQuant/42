/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 00:29:57 by dlemp             #+#    #+#             */
/*   Updated: 2016/10/29 07:28:15 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int		ft_iterative_factorial(int nb)
{
	int nmax;

	nmax = nb;
	if (nb <= 0)
		return (1);
	if (nb == 1)
		return (1);
	while (nmax <= nb && nmax >= 1)
	{
		nb = (nmax * nb);
		nmax--;;
	}
	return (nb);
}
