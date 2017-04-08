
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


char	*ft_strnew(size_t size)
{
		char *p;
		int i;

		if ((p = malloc(sizeof(char) * size + 1)))
		{
			i = 0;
			while (i < (int)size)
			{
				p[i] = 0;
				i++;
			}
			p[size] = '\0';
			return (p);
		}
		else
			return (NULL);
}

int		ft_wordcount(char *s, char c)
{
		int i;
		int	words;

		i = 0;
		words = 0;
		while (s[i])
		{
			if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
				words++;
			i++;
		}
		if (s[0] != c)
			words++;
		return (words);
}

static char	*ft_helpsplit(char *swi, const char *s, int i, int wl)
{
	int lditer;
	int liter;

	liter = i - wl;
	lditer = 0;
	while (lditer <= wl)
	{
		swi[lditer] = s[liter];
		lditer++;
		liter++;
	}
	return (swi);
}


static char **ft_splitter(const char *s, char **ss, int i, char c)
{
	int wl;
	int wi;

	wi = 0;
	wl = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\0')
			return (NULL);
		if (s[i] != c && s[i + 1] != c && s[i + 1] != '\0')
		   wl++;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			ss[wi] = ft_strnew((size_t)wl - 1);
			ss[wi] = ft_helpsplit(ss[wi], s, i, wl);
			wi++;
			wl = 0;
		}
		i++;
	}
	return (ss);
}


char	**ft_strsplit(char const *s, char c)
{
	int i;
	int wordcount;
	char **strings;

	i = 0;
	wordcount = 0;
	if (!s)
		return (NULL);
	wordcount = ft_wordcount((char *)s, c);
	strings = (char **)malloc(sizeof(char**) * wordcount + 1);
	if (strings == NULL)
		return (NULL);
	strings[wordcount] = NULL;
	while (s[i] == c)
		i++; 
	return (ft_splitter(s, strings, i, c));
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		char **strings = ft_strsplit(argv[1], (char)'|');
		for (int i = 0; i < atoi(argv[2]); i++)
			printf("%s\n", strings[i]);
	}
	return 0;
}
