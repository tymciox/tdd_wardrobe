#include <stdio.h>
#include <stdint.h>
#include <string.h>

static char tab[10] = {0};

void init_convert(void)
{
    memset(tab, 0, sizeof(tab));
}

char *convert(int number)
{
    for (uint8_t i=0; i<number; i++)
    {
        tab[i] = 'I';
    }
    return tab;
}