#include <stdio.h>
#include "wardrobe.h"
#include <string.h>
#include <stdlib.h>

void init(void)
{

}

int add(char *numbers)
{
    int sum = 0;
    char *num_ptr = NULL;

    if (NULL == numbers || '\0' == *numbers)
    {
        return 0;
    }

    num_ptr = numbers;
    num_ptr--;
    do
    {
        sum += atoi(num_ptr+1);
        num_ptr = strpbrk(num_ptr+1, "\n,");
    } while (num_ptr != NULL);
    
    return sum;
}