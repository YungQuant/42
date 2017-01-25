#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	char *arg;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	arg = argv[1];
	while (arg[i])
	{
		while (arg[i] != ' ' && arg[i] != '\t')
		{
			write(1, &arg[i], 1);
			i++;
			if (arg[i] == ' ' || arg[i] == '\t')
				return (0);
		}
		i++;
	}
	return (0);
}

