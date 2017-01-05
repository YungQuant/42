int		makeattempt(int array, int attempti, int xiter, int yiter)
{
	array[xiter][yiter] = attempti;
	xiter++;
	return (xiter);
}

int		display(array)
{
	int dxiter;
	int dyiter;

	dxiter = 0;
	dyiter = 0;
	while (dyiter < 9)
	{
		while (dxiter < 9)
		{
			write(1, array[dxiter][dyiter], 15);
			dxiter++;
		}
		write(1, '\n', 3);
		dyiter++;
	}
	return (42);
}
int		ifdot(int array, int attempti, int xiter, int yiter)
{
	if (checkattempt(array, attempti, xiter, yiter) != 0)
		makeattempt(array, attempti, xiter, yiter);
	else
		iffail();
	return (1337);
}

	return (array, attempti, xiter, yiter);
}

int		iffail(int xiter)
{
	xiter--;
	return (xiter);
}

