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
