#include <stdio.h>
#include <string.h>

static char tab[10] = {0};

void init_convert(void)
{
    memset(tab, 0, sizeof(tab));
}

char *convert(int number)
{

    if (number > 40)
    {
        strcat(tab, "XL");
        number -= 40;
    }

    if (number > 20)
    {
        while (number>9)
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

    while (number>0)
    {
        strcat(tab, "I");
        number -= 1;
    }

    return tab;
}