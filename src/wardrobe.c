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
    {4, "IV"},
    {5, "V"},
    {9, "IX"},
    {10, "X"},
    {40, "XL"},
    {50, "L"},
    {90, "XC"},
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
        while(number > roman_tab[8].arabic-1)
        {
            strcat(tab, roman_tab[8].roman);
            number -= roman_tab[8].arabic;
        }

        if ( number > roman_tab[7].arabic - 1)
        {
            strcat(tab, roman_tab[7].roman);
            number -= roman_tab[7].arabic;
        }

        if (number > roman_tab[6].arabic)
        {
            strcat(tab, roman_tab[6].roman);
            number -= roman_tab[6].arabic;
        }

        if (number > 39)
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