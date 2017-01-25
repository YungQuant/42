#include <unistd.h>

int		hidenp(char *s1, char *s2)
{	
	int i;
	int i2;

	i = 0;
	i2 = 0;
	while (1 > 0)
	{
		if (s1[i] != '\0' && s2[i2] == '\0')
		{
			write(1, "0", 1);
			return (0);
		}
		if (s1[i] == '\0' && s2[i2] == '\0')
		{
			write(1, "1", 1);
			return (1);
		}
		if (s1[i] == s2[i2])
			i++;
		else
			i2++;
	}
}


int		main(int argc, char **argv)
{
	int out;

	if (argc == 3)
		hidenp(argv[1], argv[2]);
	else
		write(1, "\n", 1);
	return (0);
}
