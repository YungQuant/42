/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 12:47:15 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/18 15:43:23 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		ft_intlen(int n)
{
	int len;

	len = 1;
	if (n == -2147483648)
		return (10);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	if (n <= 2147483647)
	{
		while (n > 10)
		{
			len++;
			n /= 10;
		}
	}
	else
		len = 0;
	return (len);
}

int main(int argc, char **argv)
{
	int n = atoi(argv[1]);
	printf("%i\n", ft_intlen(n));
	return 0;
}
