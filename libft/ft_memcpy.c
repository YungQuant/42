#include <string.h>

void *ft_memcpy(void *restrict dst, const void *src, size_t n)
{
	int i = 0;
	if (n > 0)
	{
		while (i < (int)n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return dst;
}


