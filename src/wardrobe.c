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
    char delimiters[5] = {0};

    if (NULL == numbers || '\0' == *numbers)
    {
        return 0;
    }

    if (0 == strncmp(numbers, "//", 2))
    {
        if (*(numbers+3) != '\n') return 0;
        delimiters[0] = *(numbers+2);
        num_ptr = numbers + 4;
    }
    else
    {
        delimiters[0] = ',';
        num_ptr = numbers;
    }
    strcat(delimiters, "\n");

    num_ptr--;
    do
    {
        sum += atoi(num_ptr+1);
        num_ptr = strpbrk(num_ptr+1, delimiters);
    } while (num_ptr != NULL);
    
    return sum;
}