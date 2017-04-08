#include "fillit.h"

void	set_place(t_tetro *tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i].shape != NULL)
	{
		j = 0;
		while (tab[i].shape[j] == '.')
			j++;
		tab[i].place = j;
		i++;
	}
}

int		nb_of_pieces(t_tetro *tetris)
{
	int i;

	i = 0;
	while (tetris[i].shape != NULL)
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	t_tetro		tab[27];
	t_res		res;

	ft_bzero(tab, 27 * sizeof(*tab));
	fill_with_points(&res);
	if (argc == 2)
	{
		read_file(argv[1], tab);
		res.size = ft_sqrt(nb_of_pieces(tab) * 4);
		set_place(tab);
		ft_solve_tetris(&res, tab, 0);
	}
	else
		ft_exit();
	return (0);
}
