#include <string.h>
#include <stdlib.h>

char *ft_strnew(size_t size)
{
	char *p;
	if ((p = malloc(sizeof(char) * size + 1)))
	{
		int i = 0;
		while (i < (int)size)
		{
			p[i] = 0;
			i++;
		}
		p[size] = '\0';
		return p;
	}
	else
		return NULL;
}
