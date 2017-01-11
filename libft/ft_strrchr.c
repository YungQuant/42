#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
    size_t len = ft_strlen(s);
    int i = (int)len;
    char cp = (char)c;
    while (i > 0)
    {
        if (s[i] == cp)
            return (char *)&s[i];
        i--;
    }
    return NULL;
}
