#include <string.h>

void *ft_memccpy(void *restrict dst, const void *src, int c, size_t n)
{
	int i = 0;
	while (i < (int)n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		if (((unsigned char *)dst)[i] == (unsigned char)c)
			return &dst[i + 1];
		i++;
	}
	return NULL;
}


