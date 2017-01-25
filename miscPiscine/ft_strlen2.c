#include <stdio.h> /*ahhhhhhhhh*/

int	 ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*TEST MANIN, Q IS FUNC*/

int	main(int argc, char **argv)
{
	char *str;

	str = argv[1];
	printf("%i\n", ft_strlen(str));
	return (0);
}
