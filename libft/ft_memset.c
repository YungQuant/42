#include <string.h>
#include <stdlib.h>

void *ft_memset(void *b, int c, size_t len)
{
	b = malloc(sizeof(unsigned char) * len + 1);
	int i = 0;
	unsigned char cp;
	cp = c;
	while (i <= (int)len){
		((char *)b)[i] = cp;
		i++;}
	return b;
}
