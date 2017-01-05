#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	char *str;

	i = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] + 13;
				write(1, &str[i], 1);
			}
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 13;
				write(1, &str[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
