#include <string.h>
#include <stdlib.h>

void *ft_memset(void *b, int c, size_t len)
{
	int i = 0;
	if (len == 0)
		return b;
	unsigned char cp;
	cp = c;
	while (i < (int)len)
	{
		((char *)b)[i] = cp;
		i++;
	}
	return b;
}
