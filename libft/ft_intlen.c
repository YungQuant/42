int		ft_intlen(int n)
{
	int len = 0;
	if (n == -2147483648)
		return (10);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	if (n < 10)
		len += 1;
	else if (n < 100)
		len += 2;
	else if (n < 1000)
		len += 3;
	else if (n < 10000)
		len += 4;
	else if (n < 100000)
		len += 5;
	else if (n < 1000000)
		len += 6;
	else if (n < 10000000)
		len += 7;
	else if (n < 100000000)
		len += 8;
	else if (n < 1000000000)
		len += 9;
	else if (n <= 2147483647)
		len += 10;
	else
		len = 0;
	return len;
}
