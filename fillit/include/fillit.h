#ifndef FILLIT_H
# define FILLIT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft.h"

typedef struct	s_result
{
	char		tab[200];
	int			size;
}				t_res;

typedef struct	s_tetris
{
	char		*shape;
	int			place;
	int			last_try;
}				t_tetro;

/*
**	ft_check.c
*/

int				check_tetris(char *tetris);
int				count_elem(char *tetris);
int				check_shape(char *tetris, int x, int y, int dir);

/*
**	ft_core.c
*/

void			set_place(t_tetro *tab);
int				nb_of_piece(t_tetro *tetro);
int				main(int argc, char **argv);

/*
**	ft_read.c
*/

t_tetro			*read_file(char *argv, t_tetro *tab);
char			*read_one(int fd, int index);

/*
**	ft_tetris_simulator.c
*/

void			ft_solve_tetris(t_res *res, t_tetro *tetris, int index);
int				coordinate_transformation(int i, t_res *res, t_tetro piece);
char			get_value_in_res(int i, t_res *res, t_tetro piece);
int				fits_in(t_res *res, t_tetro piece);
int				ft_fit_tetris(t_res *res, t_tetro *piece);

/*
**	ft_tetris_utility.c
*/

void			print_result(t_res *res);
void			delete_tetris(t_res *res, t_tetro tetris);
void			put_piece(t_res *res, t_tetro piece);

/*
**	ft_utility.c
*/

char			get_pos(char *tetris, int x, int y);
int				ft_sqrt(int nb);
void			ft_exit(void);
void			fill_with_points(t_res *res);

#endif
