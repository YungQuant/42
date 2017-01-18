#include <string.h>
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i = 0;
	if (len > 0)
	{
		if (dst >= src)
		{
			i = len - 1;
			while (i >= 0)
			{
				((char *)dst)[i] = ((char*)src)[i];
				i--;
			}
		}
		else
		{
			while (i < (int)len)
			{
				((char *)dst)[i] = ((char *)src)[i];
				i++;
			}
		}
	}
	return dst;
} 

