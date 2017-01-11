#include <string.h>
#include "libft.h"

size_t ft_strlen(const char *str)
{
	size_t n = 0;
	while(str[n])
	{
		n++;
	}
	return n - 1;
}

