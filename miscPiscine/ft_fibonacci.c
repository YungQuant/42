/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 22:29:11 by dlemp             #+#    #+#             */
/*   Updated: 2016/10/29 22:33:18 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_fibonacci(int index)
{
	if (index <= 0)
		return (0);
	if (index >= 1 && index < 10)
	{
		return (index * ft_fibonacci(index));
	}
	return (index);
}
