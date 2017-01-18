#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    if (*little == '\0')
        return (char *)big;
    if (!big && !little)
		return (char *)big;
	int litlen = ft_strlen(little);
	if (litlen < 1)
		return (char *)big;
    int i = 0;
    char *c1 = (char *)big;
	char *c2 = (char *)little;
	while (c1[i] && (i + litlen) <= (int)len)
	{
		if (ft_strncmp(c1 + i, c2, litlen) == 0)
			return c1 + i;
		i++;
	}
    return NULL;
}
