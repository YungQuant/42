#include <unistd.h>

void	last_word(char *str)
{
	int i;
	int spacecount;
	char letter;

	i = 0;
	spacecount = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
				spacecount = i;
		i++;
	}
	while (spacecount < i)
	{
		letter = str[spacecount + 1];
		write(1, &letter, 1);
		spacecount++;
	}
}
int	main(int argc, char **argv)
{
	
	if (argc != 2)
		write(1, "\n", 1);
	else	
		last_word(argv[1]);
	return (42);
}
