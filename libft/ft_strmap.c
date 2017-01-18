#include <stdlib.h>
#include "libft.h"

char 	*ft_strmap(char const *s, char (*f)(char))
{
	if (s)
	{
		int i = ft_strlen(s);
		char *newstr= ft_strnew(i);
		if (!newstr)
			return NULL;
		i = 0;
		while (*s)
		{
			newstr[i] = f(*s++);
			i++;
		}
		return newstr;
	}
	return NULL;
}
