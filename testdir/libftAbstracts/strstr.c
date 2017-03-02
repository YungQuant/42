#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *str)
{ 
	size_t n = 0;
	while(str[n])
	{
		n++;
	}
	return n;
}
char	*ft_strstr(const char *big, const char *little)
{
    if (*little == '\0')
        return (char *)big;
    int litlen = (int)ft_strlen(little);
    if (litlen == 0)
		return (char *)big;
    int i = 0;
    while (*big)
    {
        if (*big == little[i])
			i++;
		else
			i = 0;
    	if (little[i] == '\0')
			return ((char*)big - i + 1);
		big++;
	}
	if (!big && !little)
		return (char *)big;
    return NULL;
}

int	main(int argc, char **argv)
{
	char *big = argv[1];
	char *little = argv[2];
	printf("%s\n", ft_strstr(big, little));
	return 0;
}
