#include <string.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	char *b = argv[1];
	unsigned char c = (unsigned char)argv[2];
	size_t len = (size_t)argv[3];
	b = malloc(sizeof(char) * len + 1);
	int i = 0;
	while (i <= len){
		b[i] = c;
		i++;}
	return 0;
}
