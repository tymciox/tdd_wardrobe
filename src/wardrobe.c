#include <stdio.h>
#include <string.h>

static char tab[10] = {0};

void init_convert(void)
{
    memset(tab, 0, sizeof(tab));
}

char *convert(int number)
{
    if (number > 20)
    {
        for (int i=number; i>9; i-=10)
        {
            strcat(tab, "X");
            number -= 10;
        }
    }

    if (number/10 == 1)
    {
        strcat(tab, "X");
        number -= 10;
    }

    if (number/9 == 1)
    {
        strcat(tab, "IX");
        number -= 9;
    }

    if (number/5 == 1)
    {
        strcat(tab, "V");
        number -= 5;
    }

    if (number/4 == 1)
    {
        strcat(tab, "IV");
        number -= 4;
    }

    for (int i=0; i<number; i++)
    {
        strcat(tab, "I");
    }

    return tab;
}