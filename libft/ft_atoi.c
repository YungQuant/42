/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 11:42:04 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/01 17:40:03 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*helpfunc(char *str)
{
	int neg;

	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '+')
		str++;
	while (*str == '-')
	{
		str++;
		neg = 1;
	}
	return (*str);
}

int		ft_atoi(char *str)
{
	int i;
	int neg;

	neg = 0;
	*str = helpfunc(*str);
	if ('*str' == 2147483647)
		return (i = -2147483648);
	while (*str != '\0' && *str >= 0 && *str <= 9)
	{
		i = (*str) - '0';
		str++;
		return (i);
	}
	while (*str > 9)
		i = i * 10 + *str - '0';
	if (neg == 1)
		i = (i * -1);
	return (i);
}
