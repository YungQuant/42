#include <stdio.h>
#include <stdlib.h>

int	    main(int argc, char **argv)
{
	if (argc == 2){
	    int arg = atoi(argv[1]);
	    int i = 1;
        while (i < 10){
            int slvd = i * arg;
            if (slvd > 2147483647 || slvd < -2147483647){return (0);}
            printf("%i x %i = %i\n",i, arg, slvd);
            i++;}}
    else
        printf("\n");
	return (0);
}
