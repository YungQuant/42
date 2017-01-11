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
