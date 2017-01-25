#include <unistd.h>

int	main(int argc, char **argv)
{
	char *str;

	if (argc == 2)
	{
		str = argv[1];
		while (*str)
		{	
			if (*str == 'a')
				write(1, "a", 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
