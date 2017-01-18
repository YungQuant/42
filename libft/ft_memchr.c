#include <string.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	int i = 0;
	if (n > 0)
	{
		while (i < (int)n)
		{
			if (((unsigned char*)s)[i] == (unsigned char)c)
				return ((char*)&s[i]);
			i++;
		}
	}
	return 0;
}


