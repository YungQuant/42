#include "libft.h"
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	int i = 0;
	int worditer = 0;
	int wordlen = 0;
	int wordcount = ft_wordcount((char *)s, c);
	char **strings = (char **)malloc(sizeof(char**) * wordcount + 1);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && s[i + 1] != c && s[i + 1] != '\0')
		   wordlen++;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			wordlen++;
			strings[worditer] = malloc(sizeof(char*) * wordlen + 1);
			int liter = (i + 1) - wordlen;
			int lditer = 0;
			while (liter <= i && lditer <= wordlen)
			{
				strings[worditer][lditer] = s[liter];
				lditer++;
				liter++;
			}
			worditer++;
			wordlen = 0;
		}
		i++;
	}
	return strings;
}
