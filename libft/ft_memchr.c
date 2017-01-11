#include <string.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	int i = 0;
	unsigned char *fp;
	unsigned char ccpy;
	ccpy = (unsigned char)c;
	unsigned char *str;
	str = (unsigned char *)s;
	while (i < (int)n)
	{
		if (str[i] == ccpy)
		{	
			fp = &str[i];
			return fp;
		}
		i++;
	}
	fp = &str[++i];
	return fp;
}


