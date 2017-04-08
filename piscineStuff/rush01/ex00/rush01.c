int		main(int argc, char **argv)
{
	char array;

	if (argc != 10)
		return (0);
	array = (int*)malloc(sizeof(int) * (9 * 9));
	array[9][9];
	fillarray(argc, array, **argv);
	attempt(array);
	display(array);
	return (69);	
	
	
int		fillarray(int argc, int array, char **argv)
{
	while (yiter < argc)
	{
		while (xiter < 9)
		{
			array[xiter][yiter] = argv[xiter][yiter];
			xiter++;
		}
		yiter++;
		xiter = 0;
	}
	return (array);
}

int		attempt(int array)
{
	int attempti;
	int yiter;
	int xiter;

	attempti = 1;
	yiter = 0;
	xiter = 0;
	while (yiter < 9)
	{
		while (xiter < 9)
		{
			if (array[xiter][yiter] = '.')
				ifdot(array, attempti, xiter, yiter);
			else
				xiter++;
		}
		yiter++;
	}
	return (666);
}
