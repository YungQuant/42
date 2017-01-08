void	ft_strlen(char *str)
{
	int n = 0;
	while(str[n] != 'NULL')
	{
		n++;
	}
	ft_putnbr(n);
}
