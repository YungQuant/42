#include <unistd.h>

int	main(int argc, char **argv)
{
	char *str;
	int i;
	int index;

	if (argc == 2)
	{
		str = argv[1];
		while (str[i])
		{	
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				index = str[i] - 'a' + 1;
				while (index)
				{
					write(1, &str[i], 1);
					index--;
				}
			}
			if (str[i] >= 'A' && str[i] <= 'Z')
			{	
				index = str[i] - 'A' + 1;
				while (index)
				{
					write(1, &str[i], 1);
					index--;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
