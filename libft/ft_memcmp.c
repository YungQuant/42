#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i = 0;
	int cnt = 0;
	unsigned char *sp1;
	sp1 = (unsigned char *)s1;
	unsigned char *sp2;
	sp2 = (unsigned char *)s2;	
	while (i < (int)n)
	{
		if (sp1[i] == sp2[i])
			cnt++;
		i++;
	}
	if (cnt == (int)n)
		return 0;
	else
		return cnt;
}

