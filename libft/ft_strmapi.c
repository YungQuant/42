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
