#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int isPrime(int num)
{
	int i = 2;
	while (i < num - 1){
		if (num % i == 0){return 0;}
		i++;}
	return 1;
}

int main(int argc, char **argv)
{
	if (argc == 2){
		int arg = atoi(argv[1]);
		int i = 2;
		while (i < arg){
			if (arg % i == 0 && isPrime(i)){printf("%i*", i);}
			i++;}}
	printf("\n");
	return 0;
}
