#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	printstr(char *str)
{
	printf(str);
	return (0);
}

int	main(int argc, char **argv)
{
	argv++;
	while (*argv)
	{
		printstr(*argv);
		argv++;
	}
	return (0);
}
