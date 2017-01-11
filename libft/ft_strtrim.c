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
