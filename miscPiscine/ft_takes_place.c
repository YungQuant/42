/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:58:06 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/04 13:52:20 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	char bs;
	int hr1;
	char hr2;
	int hr1a;

	hr2 = "00";
	if (hour < 1200)
		bs = "AM";
	if (hour >= 1200 && hour != 2400)
		bs = "PM";
	if (hour < 1200)
		hr1 = (hour / 100);
	if (hour >= 1200 && hour < 1300)
		hr1 = 12;
	if (hour > 1200)
		hr1 = ((hour / 100) - 12);
	hr1a = (hr1 + 1);
	printf("THE FOLLOWING TAKES PLACE BETWEEN %i:%c %c AND %i:%c %c.", hr1, hr2, bs, hr1a, hr2, bs);
}
