#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	char	*p;
	int		i;

	if ((p = malloc(sizeof(char) * size + 1)))
	{
		i = 0;
		while (i < (int)size)
		{
			p[i] = 0;
			i++;
		}
		p[size] = '\0';
		return (p);
	}
	else
		return (NULL);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_intlen(int n)
{
	int len;

	len = 0;
	if (n == -2147483648)
		return (10);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	if (n <= 2147483647)
	{
		while (n > 0)
		{
			len++;
			n /= 10;
		}
	}
	else
		len = 0;
	return (len);
}

static char		*contintmax(void)
{
	char *str;

	str = ft_strnew(ft_intlen(-2147483648));
	str = ft_strcpy(str, "-2147483648");
	return (str);
}

static char		*ft_cur(char *a, int i, int n, int neg)
{
	int currnum;
	
	while (i >= neg)
	{
		currnum = n % 10;
		n /= 10;
		currnum += '0';
		a[i] = (char)currnum;
		i--;
	}
	return a;
}

char	*ft_itoa(int n)
{
	char	*a;
	int		neg;
	int		i;
	int		nlen;

	if (n == -2147483648)
		return (contintmax());
	neg = 0;
	nlen = ft_intlen(n);
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	a = ft_strnew(nlen);
	if (!a)
		return (NULL);
	i = nlen - 1;
	a = ft_cur(a, i, n, neg);
	if (neg == 1)
		a[0] = '-';
	return (a);
}


int	main()
{
	int num = 27528982;
	int r = 1092531767;
//   r =	(int)arc4random();
	printf("intlen: %i\n", ft_intlen(r));
	printf("%i  %s\n", r, ft_itoa(r));	
	return 0;
}
