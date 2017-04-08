#include <unistd.h>

int		twostrlen (char *str1, char *str2)
{
	int i1;
	int i2;
	int len;

	i1 = 0;
	i2 = 0;
	while (str1[i1])
		i1++;
	while (str2[i2])
		i2++;
	len = i1 + i2;
	return (len);
}

int		checkprint(char *arr, char *s1, int i1, int i2)
{
	int i3;

	i3 = i2 - 1;
	while (arr[i3])
	{
		if (arr[i3] == s1[i1])
			return (0);
		i3--;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i1;
	int i2;
	int i3;
	char *s1;
	char *s2;
	char array[twostrlen(argv[1], argv[2])];

	i1 = 0;
	i2 = 0;
	i3 = 0;
	s1 = argv[1];
	s2 = argv[2];
	while (s1[i1])
	{
		while (s2[i3])
		{
			if (s1[i1] == s2[i3])
			{
				array[i2] = s1[i1];
				if (checkprint(array, s1, i1, i2))
					write(1, &s1[i1], 1);
				i2++;
			}
			i3++;
		}
		i3 = 0;
		i1++;
	}
	return (0);
}


