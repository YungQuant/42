#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int len(char *str)
{
    int i = 0;
    while (str[i]){i++;}
    return i;
}

int check(char x, char *str, char *use)
{
    int i, k = 0;
    while (k < len(use)){
        if (x == use[k]){return 0;}
        k++;}
    while (i < len(str)){
        if (x == str[i]){return 1;}
        i++;}
    return 0;
}

int main(int argc, char **argv)
{
    if (argc == 3){
        char *str1 = argv[1];
        char *str2 = argv[2];
        printf("str1: %s str2: %s\n", str1, str2);
        int i = 0;
        char *used = (char *)malloc(sizeof(char) * (len(str1) + len(str2)));
        while (i < len(str1)){
            char test = str1[i];
            if(check(test, str2, used)){printf("%c", test); used[i] = test;}
            i++;}}
    printf("\n");
	return 0;
}
