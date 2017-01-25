#include <unistd.h>

int		mystrlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		checkindex(char *s1, int i1)
{
	int initer;
	char index[mystrlen(s1)];
	initer = 0;
	while (index[initer])
	{
		if (index[initer] == s1[i1])
			return (0);
		else
		{
			write(1, &s1[i1], 1);
			index[initer] = s1[i1];
		}
		initer++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i1;
		int i2;
		i1 = 0;
		i2 = 0;
		char *s1;
		char *s2;
		s1 = argv[1];
		s2 = argv[2];
		while (s1[i1])
		{
			while (s2[i2])
			{
				if (s1[i1] == s1[i2])
					checkindex(s1, i1);
				i2++;
			}
			i2 = 0;
			i1++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

