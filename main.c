#include <stdio.h>
#include <string.h>
#include "libft.h"

int     main(int argc, char **argv)
{
    char *s1 = (char *) malloc(sizeof(char) * 7);
    char *s2 = (char *) malloc(sizeof(char) * 7);

    s1[0] = 'a';
    s1[1] = ',';
    s1[2] = 'c';
    s1[3] = ',';
    s1[4] = 'e';
    s1[5] = 'd';
    s1[6] = '\0';

    s2[0] = 'z';
    s2[1] = 'y';
    s2[2] = 'x';
    s2[3] = 'w';
    s2[4] = 't';
    s2[5] = 's';
    s2[6] = '\0';

    int i = 0;
    char **tab = ft_split(s1, ',');
    while (tab[i] != NULL)
    {
        printf("%s\n", tab[i]);
        i++;
    }

    free(s1);
    free(s2);

    return (0);
}