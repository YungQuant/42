#include <unistd.h>

int		atoi(char *str)
{
	int i;
	int result;
	int neg;

	result = 0;
	neg = 0;
	while (str[i])
	{	
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				neg = 1;
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + str[i] - '0';
		}
		i++;
	}
	if (neg == 1)
		return (-result);
	else
		return (result);
}

int		findPrimeSum(int arg)
{
	int result;

	result = 0;
	while (arg > 1)
	{
		if (primeBool(arg))
			result += arg;
		arg--;
	}
	return (result);
}

int		primeBool(int arg)
{
	int temparg;
	int	iter;

	temparg = arg - 1;
	iter = 2;
	while (temparg > 1)
	{
		while (iter < arg)
		{
			if ((temparg * iter) == arg)
				return (0);
			iter++;
		}
		iter = 2;
		temparg--;
	}
	return (1);
}
		
int	main(int argc, char **argv)
{
	int arg;
	int sum;
	int *res;
	if (argc == 2)
	{
		arg = atoi(argv[1]);
		sum = findPrimeSum(arg);
		res = &sum;
		write(1, res, 1);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}

