#include <string.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
    ft_memcpy(s1 + ft_strlen(s1), s2, n);
	return s1;
}
