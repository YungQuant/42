#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    if (*little == '\0')
        return (char *)big;
    int litlen = ft_strlen(little);
    int matchcount = 0;
    int i = 0;
    while (i < (int)len)
    {
        if (big[i] == little[i])
        {
            if (matchcount == litlen)
				return &((char *)big)[i - litlen];
            matchcount++;
        }
        i++;
    }
    return NULL;
}
