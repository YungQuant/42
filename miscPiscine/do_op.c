#include "doopheader.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int s1SignBool;
	int s2SignBool;

	if (argc == 4)
		printf("%i", oper8r(argv[1], argv[2], argv[3]));
	else
		printf("\n");
	return (666);
}
