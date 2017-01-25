/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 19:17:37 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/01 23:20:46 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}




char	*ft_strcapitalize(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		while (!is_alpha(str[i]) && str[i])
			i++;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		while (is_alpha(str[i]))
			i++;
	}	
	return (str);
}
