/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 14:28:57 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/19 22:49:34 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	sp1;
	unsigned char	sp2;

	i = 0;
	while (i < (int)n)
	{
		sp1 = ((unsigned char *)s1)[i];
		sp2 = ((unsigned char *)s2)[i];
		if (sp1 != sp2)
			return (sp1 - sp2);
		i++;
	}
	return (0);
}
