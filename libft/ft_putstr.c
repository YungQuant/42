#include "libft.h"

void ft_putstr(char *str)
{
	int a;

	a = 0;
	if (!str)
		return ;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}
