#include <unistd.h>


void	sas(int height, int width)
{
	int i;
	int j;
	
	i = 0;
	while(i <= height)
	{
		j = 0;
		while(j <= width)
		{
			write(1, "O", 1);
			j++;
		}
		write(1, "X" , 1);
		write(1, "\n", 1);
		i++;
	}
}

void	sastantua(size)
{
	int height;
	int width;
	int itera;
	int iterb;
	
	height = (;
	width =  ;
	itera = 0;
	iterb = 0;

	while(itera < width)
	{
		while(iterb < height)
			{
			sas(height, width);
			i++;
			}
	}
}

int		main()
{	int size;

	size = 2;
	sastantua(int size);
	return (0);
}
