/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:11:52 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/22 22:12:02 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!(*little))
		return ((char *)big);
	if (!(*big) || len == 0)
		return (NULL);
	if ((*little) == (*big))
		if (ft_strnstr(big + 1, little + 1, len - 1) - 1 == big)
			return ((char *)big);
	return (ft_strnstr(big + 1, little, len - 1));
}
