/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:59:20 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/04 16:07:52 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_callatz_conjecture(unsigned int base)
{
	if (base % 2 = 0)
		base /= 2;
	if (base % 2 != 0)
		base = ((base * 3) + 1);
	ft_collatz_conjecture(base);
}
