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
