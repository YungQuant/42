#include <stdlib.h>
#include "libft.h"

char 	*ft_itoa(int n)
{
	int neg = 0;
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	int nLen = ft_intlen(n);
	char *a = malloc(sizeof(char *) * nLen);
	int i = nLen;
	while (i >= neg)
	{
		int currNum = n % 10;
		n /= 10;
		currNum += '0';
		a[i] = (char)currNum;
		i--;
	}
	if (neg == 1)
		a[0] = '-';
	return a;
}
