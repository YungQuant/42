#include <string.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strcat(char *restrict s1, const char *restrict s2)
{
    int len1 = ft_strlen((char *)s1);
    int len2 = ft_strlen((char *)s2);
    int i = 0;
    char *tmp = malloc(sizeof(char) * len1);
    while (i < len1)
    {
        tmp[i] = s1[i];
        i++;
    }
    s1 = malloc(sizeof(char) * len1 + len2);
    int k = 0;
    while (k < len1)
    {
        s1[k] = tmp[k];
        k++;
    }
    int j = 0;
    while (j < len2)
    {
        s1[k + j] = s2[j];
        j++;
    }
    return s1;
}
