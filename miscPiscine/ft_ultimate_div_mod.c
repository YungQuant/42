/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 23:25:38 by dlemp             #+#    #+#             */
/*   Updated: 2016/10/28 23:41:39 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int a2;
	int b2;

	a2 = *a;
	b2 = *b;
	*a = a2 / b2;
	*b = a2 % b2;
}
