#include <stdlib.h>
#include "libft.h"

static char *contIntMax()
{
	char *str = ft_strnew(ft_intlen(-2147483648));
	str = ft_strcpy(str, "-2147483648");
	return str;
}

char 	*ft_itoa(int n)
{
	if (n == -2147483648)
		return contIntMax();
	int neg = 0;
	int currNum;
	int nLen = ft_intlen(n);
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	char *a; 
	a = (char *)malloc(sizeof(char) * nLen + 1);
	if (!a)
		return NULL;
	a[nLen] = '\0';
	int i = nLen - 1;
	while (i >= neg)
	{
		currNum = n % 10;
		n /= 10;
		currNum += '0';
		a[i] = (char)currNum;
		i--;
	}
	if (neg == 1)
		a[0] = '-';
	return a;
}
