#include <stdio.h>
#include <string.h>

#define element_nr(a) (sizeof(a)/sizeof(struct arabic_roman))

static char tab[10] = {0};

struct arabic_roman
{
    int arabic;
    char *roman;
};

static struct arabic_roman roman_tab[] = 
{
    {1, "I"},
    {5, "V"},
    {10, "X"},
    {50, "L"},
    {100, "C"},
};

void init_convert(void)
{
    memset(tab, 0, sizeof(tab));
}

char *convert(int number)
{
    // for (int i=element_nr(roman_tab)-1; i>=0; i--)
    // {
        while(number > roman_tab[4].arabic)
        {
            strcat(tab, roman_tab[4].roman);
            number -= roman_tab[4].arabic;
        }

        if (number > 90)
        {
            strcat(tab, "XC");
            number -= 90;
        }

        if (number > roman_tab[3].arabic)
        {
            strcat(tab, roman_tab[3].roman);
            number -= roman_tab[3].arabic;
        }

        if (number > 40)
        {
            strcat(tab, "XL");
            number -= 40;
        }

        while (number>9)
        {
            strcat(tab, "X");
            number -= 10;
        }

        if (number > 8)
        {
            strcat(tab, "IX");
            number -= 9;
        }

        if (number > 4)
        {
            strcat(tab, "V");
            number -= 5;
        }

        if (number > 3)
        {
            strcat(tab, "IV");
            number -= 4;
        }

        while (number>0)
        {
            strcat(tab, "I");
            number -= 1;
        }
    // }

    return tab;
}