/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 18:04:54 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/01 18:07:46 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int itf;
	int istr;

	itf = 0;
	istr = 0;
	while (to_find[itf] != '\0')
	{
		while (to_find[itf] == str[istr])
		{
			istr++;
			itf++;
		}
		if (to_find[itf] == '\0' && str[istr] == '\0')
			return (str);
		istr++;
	}
	return (str);
}
