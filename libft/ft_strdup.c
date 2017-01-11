#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(const char *s1)
{
	char *str;
	int i = 0;
	str = (char*)malloc(sizeof(char) * ft_strlen(s1));
	while (i < (int)ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	return str;
}

