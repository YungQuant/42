#include <stdlib.h>

void	ft_strclr(char *s)
{
	int i = 0;
	if (s)
	{
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
	}
}
