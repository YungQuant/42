
int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int v;

	v = 0;
	i = 0;
	if (i < (int)n)
	{
		while ((s1[i] == s2[i]) && (s1[i] != '\0'))
			i++;
		v += (s1[i] - s2[i]);
	}
	return (v);
}
