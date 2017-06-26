/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 12:49:18 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/23 12:28:04 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char		*contintmax(void)
{
	char *str;

	str = ft_strnew(ft_intlen(-2147483648));
	str = ft_strcpy(str, "-2147483648");
	return (str);
}

static char		*ft_cur(char *a, int i, int n, int neg)
{
	int currnum;

	while (i >= neg)
	{
		currnum = n % 10;
		n /= 10;
		currnum += '0';
		a[i] = (char)currnum;
		i--;
	}
	return (a);
}

char			*ft_itoa(int n)
{
	char	*a;
	int		neg;
	int		i;
	int		nlen;

	if (n == -2147483648)
		return (contintmax());
	neg = 0;
	nlen = ft_intlen(n);
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	a = ft_strnew(nlen);
	if (!a)
		return (NULL);
	i = nlen - 1;
	a = ft_cur(a, i, n, neg);
	if (neg == 1)
		a[0] = '-';
	return (a);
}
