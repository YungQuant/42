#include "fillit.h"

void	print_result(t_res *res)
{
	int i;

	i = 0;
	while (i < res->size)
	{
		write(1, res->tab + (i * res->size), res->size);
		ft_putchar('\n');
		i++;
	}
}

void	delete_tetris(t_res *res, t_tetro tetris)
{
	int i;

	i = 0;
	while (i < (res->size * res->size))
	{
		if (res->tab[i] == tetris.shape[tetris.place])
			res->tab[i] = '.';
		i++;
	}
}

void	put_piece(t_res *res, t_tetro piece)
{
	int i;

	i = piece.place;
	while (i < 16)
	{
		if (piece.shape[i] != '.')
			res->tab[coordinate_transformation(i, res, piece)] = piece.shape[i];
		i++;
	}
}
