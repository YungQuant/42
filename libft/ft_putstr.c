/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 12:58:15 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/18 13:31:02 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	if (!str)
		return ;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}