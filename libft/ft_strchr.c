#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    char *sp = (char *)s;
	size_t len = ft_strlen(s);
    int i = 0;
    char cp = (char)c;
    while (i < (int)len)
    {
        if (sp[i] == cp)
            return &sp[i];
        i++;
    }
    return NULL;
}
