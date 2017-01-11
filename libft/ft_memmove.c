#include <string.h>
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i = 0;
	void *tmp = malloc(sizeof(void *) * len);
	while (i < (int)len)
	{
		((char *)tmp)[i] = ((char *)src)[i];
		i++;
	}
	int k = 0;
	while (k < (int)len)
	{
		((char *)dst)[k] = ((char *)tmp)[k];
		k++;
	}
	return dst;
} 

