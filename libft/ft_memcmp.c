#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i = 0;
	unsigned char sp1;
	unsigned char sp2;	
	while (i < (int)n)
	{
		sp1 = ((unsigned char *)s1)[i];
		sp2 = ((unsigned char *)s2)[i];
		if (sp1 != sp2)
			return ((sp1 - sp2));	
		i++;
	}
	return 0;
}

