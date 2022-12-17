#include <stdio.h>
#include "wardrobe.h"

static const int ElementDimension[] =
{
    50,
    75,
    100,
    120,
};

int CombinationTab[5][10] = 
{
    {50, 50, 50, 50, 50},
    {100, 100, 50},
};

int *combination(void)
{
    for(int i=0; i<4; i++)
    {
        printf("Dim: %d\r\n", ElementDimension[i]);
    }return CombinationTab;
}