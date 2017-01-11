int		ft_intlen(int n)
{
	int len;
	if (n < 10)
		len = 1;
	if (n < 100)
		len = 2;
	if (n < 1000)
		len = 3;
	if (n < 10000)
		len = 4;
	if (n < 100000)
		len = 5;
	if (n < 1000000)
		len = 6;
	if (n < 10000000)
		len = 7;
	if (n < 100000000)
		len = 8;
	if (n < 1000000000)
		len = 9;
	if (n < 2147483647)
		len = 10;
	else
		len = 0;
	return len;
}
