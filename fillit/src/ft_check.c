#include "fillit.h"

int		count_elem(char *tetris)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (i < 16)
	{
		if (tetris[i] != '.')
			c++;
		i++;
	}
	return (c);
}

int		check_shape(char *tetris, int x, int y, int direction)
{
	if (get_pos(tetris, x, y) != '.')
	{
		if (direction == 0)
			return (1 + check_shape(tetris, x + 1, y, 1) +
					check_shape(tetris, x - 1, y, -1)
					+ check_shape(tetris, x, y + 1, 0));
		else if (direction == 1)
			return (1 + check_shape(tetris, x + 1, y, 1) +
					check_shape(tetris, x, y + 1, 0));
		else if (direction == -1)
			return (1 + check_shape(tetris, x - 1, y, -1) +
					check_shape(tetris, x, y + 1, 0));
	}
	return (0);
}

int		check_tetris(char *tetris)
{
	int x;
	int y;

	if (count_elem(tetris) != 4)
		ft_exit();
	x = 0;
	y = 0;
	while (get_pos(tetris, x, y) == '.')
	{
		x++;
		if (x == 4)
		{
			x = 0;
			y++;
		}
	}
	if (check_shape(tetris, x, y, 1) < 4)
		ft_exit();
	return (0);
}
