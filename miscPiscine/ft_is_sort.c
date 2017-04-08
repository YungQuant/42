/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 00:12:20 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/08 00:12:56 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int pos;

	pos = 0;
	while (tab[pos] == tab[pos])
	{
		if (pos >= length)
			return (0);
	}
	while (tab[pos] < tab[pos])
	{
		if (pos >= length)
			return (-1);
	}
	while (tab[pos] > tab[pos])
	{
		if (pos >= length)
			return (1);
	}
	return (1);
}
