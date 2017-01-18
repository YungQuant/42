#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	
	int i = 0;
	int iter = 0;
	if (!s)
		return NULL;
	int k = ft_strlen((char*)s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	if (s[i] == '\0')
		return (&((char*)s)[i]);
	while (s[k-1] == ' ' || s[k-1] == '\n' || s[k-1] == '\t')
	{
		k--;
	}
	char *string = malloc(sizeof(char) * (k - i) + 1);
	if (!string)
		return NULL;
	string[k - i] = '\0';
	while (i < k)
	{
		string[iter] = s[i];
		i++;
		iter++;
	}
	return string;
}
