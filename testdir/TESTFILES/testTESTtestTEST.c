
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    tex04                                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlemp <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/27 01:01:44 by dlemp             #+#    #+#              #
#    Updated: 2016/10/27 01:02:09 by dlemp            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

void diffcomb(void)
{
	char o;
	char t; 
	char h;

	o = '0';
	while (++h <= 7)
	{
		t = h + 1;
		while (++t <= 8)
		{
			o = t +1;
			while (++o <=9)
			{
				ft_putchar(h, t, o); 
				if (h != 7 || t != 8 || o != 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}


