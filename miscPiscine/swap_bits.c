#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return (octet << 4 | octet >> 4);
}

int			main(void)
{
	unsigned char o = 65;

	printf("%d swap : %d \n", o, swap_bits(o));
	return (0);
}
