#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	if (s)
	{
		int i = 0;
		char *newstr = ft_strnew(ft_strlen(s));
		if (!newstr)
			return NULL;
		while (s[i])
		{
			newstr[i] =f(i, s[i]);
			i++;
		}
		return newstr;
	}
	return NULL;
}
