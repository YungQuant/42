#include <string.h>
#include <stdlib.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	if (!size || size == 0)
		return '\0';
	size_t dstLen = ft_strlen(dst);
	size_t srcLen = ft_strlen(src);
	int i = 0;
	while (src[i] && (dstLen + i) < size - 1)
	{
		dst[dstLen + i] = src[i];
		i++;
	}
	dst[dstLen + i] = '\0';
	return srcLen + ((dstLen < size) ? dstLen : size);
}
