#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
    if (*little == '\0')
        return (char *)big;
    int litlen = ft_strlen(little);
    int biglen = ft_strlen(big);
    int matchcount = 0;
    int i = 0;
    while (i < biglen)
    {
        if (big[i] == little[i])
        {
            if (matchcount == litlen)
                return (char *)&big[i - litlen];
            matchcount++;
        }
        i++;
    }
    return NULL;
}
