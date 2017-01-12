#include <stdlib.h>
#include <string.h>

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str = malloc(sizeof(char) * len);
	int i = 0;
	while (i < (int)len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	return str;
}
