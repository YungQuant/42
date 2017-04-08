#include "fillit.h"

void	ft_solve_tetris(t_res *res, t_tetro *tetris, int index)
{
	if (tetris[index].shape == NULL)
	{
		print_result(res);
		exit(0);
	}
	else
	{
		while (ft_fit_tetris(res, &tetris[index]))
		{
			ft_solve_tetris(res, tetris, index + 1);
			delete_tetris(res, tetris[index]);
		}
		tetris[index].last_try = -1;
		if (index == 0)
		{
			res->size++;
			ft_solve_tetris(res, tetris, index);
		}
	}
}

int		coordinate_transformation(int i, t_res *res, t_tetro piece)
{
	return (((i % 4) - (piece.place % 4))
			+ (((i / 4) - (piece.place / 4)) * res->size)
			+ piece.last_try);
}

char	get_value_in_res(int i, t_res *res, t_tetro piece)
{
	int x;

	x = coordinate_transformation(i, res, piece);
	if (x >= (res->size * res->size))
		return ('#');
	if ((x % res->size) >
			(coordinate_transformation(piece.place, res, piece) % res->size))
	{
		if ((i % 4 < piece.place % 4))
			return ('#');
	}
	else if (i % 4 > piece.place % 4)
		return ('#');
	return (res->tab[coordinate_transformation(i, res, piece)]);
}

int		fits_in(t_res *res, t_tetro piece)
{
	int i;

	i = piece.place;
	while (i < 16)
	{
		if (piece.shape[i] != '.')
		{
			if (get_value_in_res(i, res, piece) != '.')
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int		ft_fit_tetris(t_res *res, t_tetro *piece)
{
	piece->last_try++;
	if (piece->last_try < (res->size * res->size))
	{
		if (fits_in(res, *piece))
		{
			put_piece(res, *piece);
			return (1);
		}
		else
			return (ft_fit_tetris(res, piece));
	}
	else
	{
		piece->last_try = -1;
		return (0);
	}
}
