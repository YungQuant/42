#include <string.h>
#include <stdio.h>

size_t		ft_strlen(const char *str)
{
	size_t n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = (int)ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == c)
			return (char *)&s[i];
		i--;
	}
	return (NULL);
}
int		main(void)
{
	char *str = "Hello je tesx";
	printf("%s\n", ft_strrchr(str, 'H'));
	return 0;
}

