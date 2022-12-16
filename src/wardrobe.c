#include <stdio.h>
#include <string.h>

#define element_nr(a) (sizeof(a)/sizeof(struct arabic_roman))

static char tab[10] = {0};

/* TO DO */
static int test_number = 0;

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
    {400, "CD"},
    {500, "D"},
    {900, "CM"},
    {1000, "M"},
};

void init_convert(void)
{
    memset(tab, 0, sizeof(tab));
}

char *convert(int number)
{
    test_number++;
    printf("Test nr:%d\r\n", test_number);
    for (int i=element_nr(roman_tab)-1; i>0; )
    {
        while(number > roman_tab[i].arabic-1)
        {
            strcat(tab, roman_tab[i].roman);
            number -= roman_tab[i].arabic;
        }
        i--;
        for (int j=0; j<3; j++)
        {
            if ( number > roman_tab[i].arabic - 1)
            {
                strcat(tab, roman_tab[i].roman);
                number -= roman_tab[i].arabic;
            }
            i--;
        }

        while (number > roman_tab[i].arabic-1)
        {
            strcat(tab, roman_tab[i].roman);
            number -= roman_tab[i].arabic;
        }
    }

    return tab;
}