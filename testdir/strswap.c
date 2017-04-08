/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strswap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 16:24:57 by dlemp             #+#    #+#             */
/*   Updated: 2016/10/30 18:45:36 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		strswap(char *str1, char *str2)
{
	char *string1;
	int strc; 	
	int c0;
	int c1;
	int c2;
	c0 = 0;
	c1 = 0;
	c2 = 0;

	while  (string1[c0])
		{
			string1[c0] = str1[c0];
			c0++;
		}
	while (str1[c1])
		{
			str1[c1] = str2[c1];
			c1++;
		}
	while (str2[c2])
		{
			str2[c2] = string1[c2];
			c2++;
		}
	return (*str1, *str2);
}

int 	main()
{
	char *str1[4];
	char *str2[4];
	
	str1 = "fuck";
	str2 = "shit";	
	strswap(*str1, *str2);
	printf(*str1, *str2);
	return;
}
