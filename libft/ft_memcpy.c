#include <string.h>

void *ft_memcpy(void *s1, const void *s2, size_t n)
{
	if (n > 0)
	{
		char *c1 = (char*)s1;
		char *c2 = (char*)s2;
		while (--n)
			*c1++ = *c2++;;
		*c1 = *c2;
	}
	return s1;
}


