/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:13:33 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/04 15:16:13 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int a2;
	int b2;
	int c2;
	int d2;

	a2 = a;
	b2 = b;
	c2 = c;
	d2 = d;

	c = a2;
	d = c2;
	b = d2;
	a = b2;
}
