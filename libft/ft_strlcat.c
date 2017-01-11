#include <string.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
    int len1 = ft_strlen((char *)dst);
    int len2 = ft_strlen((char *)src);
    int i = 0;
    char *tmp = malloc(sizeof(char) * len1);
    while (i < len1)
    {
        tmp[i] = dst[i];
        i++;
    }
    dst = malloc(sizeof(char) * len1 + len2);
    int k = 0;
    while (k < len1)
    {
        dst[k] = tmp[k];
        k++;
    }
    int j = 0;
    while (j < (int)size - len1 -1)
    {
        dst[k + j] = src[j];
        j++;
    }
    dst[k + j] = '\0';
    return dst;
}
