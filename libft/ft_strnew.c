#include <string.h>
#include <stdlib.h>

char *ft_strnew(size_t size)
{
	char *p;
	p = malloc(sizeof(char) * size);
	return p;
}
