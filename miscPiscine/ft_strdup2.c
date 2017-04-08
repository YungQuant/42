#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int len;
	char *dest;
	int i;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	dest = (char*)malloc(sizeof(char) * len);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	main()
{
	char *string;
	string = "string";
	printf("%s\n", ft_strdup(string));
	return (0);
}
