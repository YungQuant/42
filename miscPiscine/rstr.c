#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void    cap(char *str){
    int i = 0;
    while (str[i]){if(str[i] >= 'a' && 
    while (str[i]){
        if (str[0] >= 'a' && str[0] <= 'z'){str[0] = str[0] - 32;}
        if (str[i] == ' '){
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z'){str[i + 1] = str[i + 1] - 32;}}
        i++;}
    printf("%s", str);
}

int	main(int argc, char **argv)
{
	if (argc > 1){
        int i = 1;
        while (argv[i]){
            char *arg = argv[i];
            cap(arg);
            i++;}}
	printf("\n");
	return (0);
}
