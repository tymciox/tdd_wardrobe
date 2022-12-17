#include <stdio.h>
#include "wardrobe.h"

static const int ElementDimension[] =
{
    50,
    75,
    100,
    120,
};

static int CombinationTab[10][5];

void init(void)
{
    memset(CombinationTab, 0, NUM_OF_ELEMENT(CombinationTab));
}

int *combination(void)
{
    for (int i=0; i<5; i++)
    {
        CombinationTab[0][i] = ElementDimension[0];
    }
    return CombinationTab;
}