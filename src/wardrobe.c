#include <stdio.h>

char *convert(int number)
{
    char tab[10] = {0};

    for (uint8_t i=0; i<number; i++)
    {
        tab[i]="I";
    }
    return tab;
}