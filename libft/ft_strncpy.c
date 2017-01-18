#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	int i;

	i = 0;
	int len = ft_strlen(src);
	if (len > (int)n)
		ft_memcpy(dest, src, n);
	else
	{
		ft_memcpy(dest, src, len);
		ft_memset(dest + len, '\0', n - len);
	}
	return (dest);
}

