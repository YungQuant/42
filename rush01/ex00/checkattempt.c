int		checkX(int attempti, int yaxis, int array)
{
	int x;

	x = 0;
	while (x < 9)
	{
		if (array[x][yaxis] == attempti)
			return (0);
		x++;
	}
	return (1);
}

int		checkY(int attempti, int xaxis, int array)

	int y;

	y = 0;
	while (y < 9)
	{
		if (array[xaxis][y] == attempti)
			return (0);
		y++;
	}
	return (1);
}

int		find3x3confines(int xaxis, int yaxis)
{
	int x1;
	int y1;
	int xlimit;
	int ylimit;

	if (xaxis < 3)
		x1 = 0;
	if (yaxis < 3)
		y1 = 0;
	if (3 <= xaxis < 6)
		x1 = 3;
	if (3 <= yaxis < 6)
		y1 = 3;
	if (xaxis >= 6)
		x1 = 6;
	if (yaxis >= 6)
		y1 = 6;
	xlimit = x1 + 3;
	ylimit = y1 + 3;
	return (x1, y1, xlimit, ylimit);
}

int		checkgrid(int attempti, int xaxis, int yaxis, int array)	
{	
	int x;
	
	x = x1;
	find3x3confines(xaxis, yaxis);
	while (y1 < ylimit)
	{
		while (x < xlimit)
		{
			if (array[x][y1] = attempti)
				return (0);
			x++;
		}
		x = x1;
		y1++;
	}
	return (1);
}
int		checkattempt(int array, int attempti, int xiter, int yiter)
{
	int a;

	a = 0;
	while (attempti < 10)
	{
		if (checkX(attempti, yiter, array) = 1);
			a++;
		if (checkY(attempti, xiter, array) = 1);
			a++;
		if (checkgrid(attempti, xiter, yiter, array) = 1);
			a++;
		if (a == 3)
			return (1);
		attempti++;
	}
	return (0);
}
