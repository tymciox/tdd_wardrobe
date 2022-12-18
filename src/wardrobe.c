#include <stdio.h>
#include "wardrobe.h"
#include <string.h>

#define MAX_COMBINATION 100

static const int ElementDimension[] =
{
    0,
    50,
    75,
    100,
    120,
};

static int CombinationTab[MAX_COMBINATION][5];

void init(void)
{
    memset(CombinationTab, 0, sizeof(CombinationTab));
}

// 50 0  0  0  0
// 50 50 0  0  0
// 50 50 50 0  0
// 50 50 50 50 0
// 50 50 50 50 50
// 75 0  0  0  0
// 75 50 0  0  0
// 75 50 50 0  0
// 75 50 50 50 0
// 75 50 50 50 50
// 75 75 0  0  0

int *combination(void)
{
    int row = 0;
    int sum = 0;
    int tab[5] = {0};

for (int num=1; num<5; num++)
{
    for (int nr=1; nr<5; nr++)
    {
        for (int sup=0; sup<5; sup++)
        {       
            tab[sup] = ElementDimension[num];
            for (int k=sup+1; k<5; k++)
            {
                tab[k] = ElementDimension[nr];
                if (tab[sup]<tab[k]) continue;
                for (int j=k+1; j<5; j++)
                {
                    tab[j] = 0;
                }

                for (int i=0; i<5; i++)
                {
                    sum += tab[i];
                }

                for (int j=0; j<5; j++)
                {
                    printf("%d ", tab[j]);
                }
                printf("sum: %d num:%d nr:%d sup:%d k:%d\r\n", sum, num, nr, sup, k);

                if (250 == sum)
                {
                    //printf("udalo sie dla: k:%d nr:%d, sup:%d\r\n", k, nr, sup);
                    for (int i=0; i<5; i++)
                    {
                        CombinationTab[row][i] = tab[i];
                        //printf("%d ", CombinationTab[row][i]);
                    }
                    //printf("\r\n");
                    row++;
                }
                sum = 0;
            }
        }
        memset(tab, 0, sizeof(tab));
    }
}

    while (row--)
    {
        printf("comb: ");
        for (int i=0; i<5; i++)
        {
            printf("%d ", CombinationTab[row][i]);
        }
        printf("\r\n");
    }

    return CombinationTab;
}
