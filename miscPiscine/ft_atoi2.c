#include <unistd.h>
#include <stdio.h>

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
			result = (result * 10) + str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (-result);
	else
		return (result);
}

int		main()
{
	char string[] = "-666";

	printf("%i\n", atoi(string));
	return (0);
}
