#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
    if (*little == '\0')
        return (char *)big;
    int litlen = ft_strlen(little);
    if (litlen == 0)
		return (char *)big;
    int i = 0;
    while (*big)
    {
        if (*big == little[i])
			i++;
		else
			i = 0;
    	if (little[i] == '\0')
			return ((char*)big - i + 1);
		big++;
	}
	if (!big && !little)
		return (char *)big;
    return NULL;
}
