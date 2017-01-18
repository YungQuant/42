#include <string.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strcat(char *s1, const char *s2)
{
    ft_memcpy(s1 + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return s1;
}
