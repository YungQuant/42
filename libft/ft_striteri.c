void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i = 0;
	
	if (s && f)
	{
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}
