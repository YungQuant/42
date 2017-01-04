#include <stdio.h> /*AHHHHHHH*/

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
/*TEST MAIN*/
int	main(int argc, char **argv)
{
	int a;
	int b;
	
	a = 1;
	b = 2;
	ft_swap(&a, &b);
	printf("%i\n", a);
	return (0);
}
