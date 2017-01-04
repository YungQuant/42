#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	pr_space(int last_line, int current_line)
{
	int i;
	int c;

	i = 0;
	c = last_line / 2 + 1 - (current_line / 2 + 1);
	while (i < c)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
}

int		calc_last(int n)
{
	int i;
	int s;
	int add;

	if (n == 1)
		return (7);
	else if (n == 2)
		return (19);
	s = 17;
	i = 0;
	add = 6;
	while (i < n - 2)
	{
		add += (i % 2) + 1;
		s += add * 2;
		i++;
	}
	return (s + 2);
}

void	pr_last(int ls, int s, int off, int last_line)
{
	int i;
	int j;
	int ds;

	ds = s - (s + 1) % 2;
	i = 0;
	while (i < ls)
	{
		j = 0;
		s = i + off / 2;
		pr_space(last_line, 2 * i + 3 + off);
		while (j < 2 * i + 1 + off)
		{
			if (ls >= 7 && i == ls - ds / 2 - 1 && j == s + (ds / 2) - 1)
				ft_putchar('$');
			else if (j >= s - (ds / 2) && j <= s + (ds / 2) && i >= ls - ds)
				ft_putchar('|');
			else
				ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}

void	pr_section(int section_size, int size, int off)
{
	int i;
	int j;

	i = 0;
	if (section_size != 3)
		off += (section_size / 2 + 1) * 2;
	if (section_size >= size + 2)
	{
		pr_last(section_size, size, off, calc_last(size));
		return ;
	}
	while (i < section_size)
	{
		j = 0;
		pr_space(calc_last(size), 2 * i + 3 + off);
		while (j < 2 * i + 1 + off)
		{
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
	pr_section(section_size + 1, size, j - 1);
}

void	sastantua(int size)
{
		pr_section(3, size, 0);
}

int		main()
{
	sastantua(2);
	return (0);
}
