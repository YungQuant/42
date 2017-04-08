#include "fillit.h"

char	get_pos(char *tetris, int x, int y)
{
	if ((x >= 4) || (y >= 4) || (x < 0) || (y < 0))
		return ('.');
	else
		return (tetris[x + (y * 4)]);
}

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	while ((i * i) < nb)
		i++;
	return (i);
}

void	ft_exit(void)
{
	ft_putstr("error");
	ft_putchar('\n');
	exit(1);
}

void	fill_with_points(t_res *res)
{
	int i;

	i = 0;
	while (i < 200)
	{
		res->tab[i] = '.';
		i++;
	}
}
