#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}
void *ft_memalloc(size_t size)
{
	int *p;
	p = (int *)malloc(sizeof(int *) * size);
	int i = 0;
	int k = 0;
	while (i < (int)size)
	{
		p[i] = k;
		i++;
	}
	return p;
}
void ft_memdel(void **ap)
{
	free(ap);
}
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}
void	ft_putendl(char const *s)
{
	ft_putstr((char*)s);
	putchar('\n');
}
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
char *ft_strnew(size_t size)
{
	char *p;
	p = malloc(sizeof(char) * size);
	return p;
}
void	ft_strdel(char **as)
{
	free(as);
}
void	ft_strclr(char *s)
{
	free(s);
}
void	ft_striter(char *s, void (*f)(char *))
{
	int i = 0;
	while (s[i])
	{
		(*f)(&s[i]);
		i++;
	}
}
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
char 	*ft_strmap(char const *s, char (*f)(char))
{
	int i = 0;
	char *newstr = malloc(sizeof(char) * ft_strlen((char *)s));
	while (s[i])
	{
		newstr[i] = (*f)(s[i]);
		i++;
	}
	return newstr;
}
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i = 0;
	char *newstr = malloc(sizeof(char) * ft_strlen((char *)s));
	while (s[i])
	{
		newstr[i] =(*f)(i, s[i]);
		i++;
	}
	return newstr;
}
int		ft_strequ(char const *s1, char const *s2)
{
	if (!(*s1) && !(*s2))
		return 1;
	if (*s1 == *s2)
		return (ft_strequ(s1 + 1, s2 + 1));
	else
		return 0;
}
int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i = 0;
	while (i < (int)n)
	{
		if (!(s1[i]) && !(s2[i]))
			return 1;
		if (s1[i] != s2[i])
			return 0;
		i++;
	}
	return 1;
}
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
char	*ft_strjoin(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		int len1 = strlen(s1);
		int len2 = strlen(s2);
		int lentot = len1 + len2;
		char *string = malloc(sizeof(char) * lentot);	
		int i = 0;
		int k = 0;
		while (s1[i])
		{
			string[i] = (char)s1[i];
			i++;
		}
		while (k < lentot)
		{
			string[i] = (char)s2[k];
			i++;
			k++;
		}
		return string;
	}
	return NULL;
}
char	*ft_strtrim(char const *s)
{
	
	int i = 0;
	int iter = 0;
	int k = ft_strlen((char*)s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	while (s[k-1] == ' ' || s[k-1] == '\n' || s[k-1] == '\t')
	{
		k--;
	}
	char *string = malloc(sizeof(char) * (k - i));
	while (i < k)
	{
		string[iter] = s[i];
		i++;
		iter++;
	}
	return string;
}
int		ft_wordcount(char *s, char c)
{
	int i = 0;
	int words = 0;
	while (s[i])
	{
		if(s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			words++;
		i++;
	}
	if (s[0] != c)
		words++;
	return words;
}

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
int		ft_intlen(int n)
{
	int len;
	if (n < 10)
		len = 1;
	if (n < 100)
		len = 2;
	if (n < 1000)
		len = 3;
	if (n < 10000)
		len = 4;
	if (n < 100000)
		len = 5;
	if (n < 1000000)
		len = 6;
	if (n < 10000000)
		len = 7;
	if (n < 100000000)
		len = 8;
	if (n < 1000000000)
		len = 9;
	if (n < 10000000000)
		len = 10;
	return len;
}
char 	*ft_itoa(int n)
{
	char *a = malloc(sizeof(char *) * ft_intlen(n));
	int i = 0;
	if (n < 0)
	{
		n = -n;
		a[i] = "-";
		i++;
	}
	while (i < ft_intlen(n))
	{


int main()
{
	/*MEMALLOC
	size_t size = 35;
	int *p = ft_memalloc(size);
	printf("memalloc: %i\n", *p);
	MEMDEL

	PUTCHAR
	ft_putchar('c');
	printf("\n");
	PUTSTR
	char str[7] = "string";
	ft_putstr(str);	
	printf("\n");
	PUTENDL
	ft_putendl(str);
	printf("\n");
	PUTNBR
	ft_putnbr(9);
	printf("\n");
	STRNEW
	char *str1 = ft_strnew(7);
	strcpy(str1, str);
	printf("%s\n", str1);
	STRDEL
	//char **strpp = malloc(sizeof(char) * 7);
	//strcpy(*strpp, str);	
	//ft_strdel(strpp);
	//printf("%s\n", *strpp);
	STRCLR
	//ft_strclr(str);
	//printf("%s\n", str);
	STRITER

	STRITERI

	STRMAP
	char *mapstr = ft_strmap();
	printf("%s\n", mapstr);
	STRMAPI

	STREQU
	printf("%i\n", ft_strequ("iliekponys", "iliekponys"));
	STRNEQ
	size_t n = 88;
	printf("%i\n", ft_strnequ("chesepizza", "cheesepizza", n));
	STRSUB
	unsigned int start = 3;
	size_t len = 3;
	char *string = ft_strsub("darfgarf", start, len);
	printf("%s\n", string);
	STRJOIN
	char *joinedstring = ft_strjoin("sthoaihbgne", "stringtwo");
	printf("%s\n", joinedstring);
	STRTRIM
	char pretrim[13] = "  \nduncan\n\n\n";
	printf("%s\n", ft_strtrim(pretrim));
	STRSPLIT
	char **splitstrings = ft_strsplit("**my**test**string**g", '*');
	for (int i = 0; i < 4; i++){printf("%s\n", splitstrings[i]);}
	ITOA*/

	return 0;
}
