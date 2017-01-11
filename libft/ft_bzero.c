#include <string.h>
#include <stdlib.h>

void *ft_bzero(void *s, size_t n)
{
	s = malloc(sizeof(int) * n);
	int i = 0;
	while (i < (int)n)
	{
		((char *)s)[i] = 0;
		i++;
	}
	return s;
}


