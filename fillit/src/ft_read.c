#include "fillit.h"

char		*read_one(int fd, int index)
{
	char	buff[20];
	int		i;
	int		len;
	char	*res;

	len = read(fd, buff, 20);
	i = 0;
	if (len < 20)
		ft_exit();
	res = (char *)malloc(17 * sizeof(*res));
	while (i < len)
	{
		if (buff[i] != '\n' && buff[i] != '.' && buff[i] != '#')
			ft_exit();
		if (buff[i] == '#')
			res[i - (i / 5)] = index + 'A';
		else if ((buff[i] == '\n') && ((i % 5) != 4))
			ft_exit();
		else
			res[i - (i / 5)] = '.';
		i++;
	}
	res[i - (i / 5)] = '\0';
	check_tetris(res);
	return (res);
}

t_tetro		*read_file(char *file, t_tetro *tab)
{
	int		i;
	int		fd;
	char	buff[1];

	fd = open(file, O_RDONLY);
	tab[0].shape = read_one(fd, 0);
	tab[0].last_try = -1;
	i = 1;
	while (read(fd, buff, 1))
	{
		if (*buff != '\n')
			ft_exit();
		tab[i].shape = read_one(fd, i);
		tab[i].last_try = -1;
		i++;
	}
	close(fd);
	check_tetris(tab[0].shape);
	return (tab);
}
