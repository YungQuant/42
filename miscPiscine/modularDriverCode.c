#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putnbr(int nb)
{
	if (nb == -2147483648)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
			return(0);
								}
	if (nb < 0)
		nb = -nb;
	if (nb >= 10)
		{	
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	else
		ft_putchar(nb + '0');
	return (0);
}




int		main(void)
{
char	 *inputs[15] = {
		-2147483647, 2147483647,
		-2147483648, 2147483648,
		-9999999999, 9999999999,
		0, 123, 123,
		123, 123456,
		01234, +1
	};
	int i = 0;
	printf("TESTS:\n");
	while (i < 15)
	{
		int a = atoi(inputs[i]);
		int nb = ft_putnbr(inputs[i]);
		char *test = a == nb ? "\x1B[32mPASS" : "\x1B[31mFAIL";
		printf("%2d: %12s - %12d - %12d - %s\x1B[0m\n", i, inputs[i], a, nb, test);
		i++;
	}
	return (0);
}
