/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:14:19 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/03 22:16:42 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_concat_params(int argc, char **argv)
{
	char *out;
	int i1;
	int i2;
	int	i3;

	i1 = 0;
	i2 = 0;
	out = (char*)malloc(sizeof(char) * (argc * 2));
	while (i1 < (argc * 2))
	{
		if (i1 % 2 == 0)
			out[i1] = 10;
		else
		{
			out[i1] = *argv[i2];
			i2++;
		}
		i1++;
	}
	return (out);
}
