#include <stdio.h>
#include "wardrobe.h"
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define IS_EMPTY(a) (NULL == a || '\0' == *a)
#define DEFAULT_DELIMITER   ','
#define START_FROM_BEGIN(a)  (a-1)   
#define SKIP_FIRST_LINE(a)  (a+3)

static int set_delimiters(const char *const numbers, char *delimiters);
static bool check_if_parameter_is_negative(char *num_ptr);

void init(void)
{

}

int add(char *numbers)
{
    int sum = 0;
    char *num_ptr = NULL;
    char delimiters[5] = {0};
    bool negative_number = false;

    if (IS_EMPTY(numbers)) return 0;

    if (set_delimiters(numbers, delimiters) != 0) return 0;

    if (delimiters[0] != DEFAULT_DELIMITER)
    {
        num_ptr = SKIP_FIRST_LINE(numbers);
    }
    else
    {
        num_ptr = START_FROM_BEGIN(numbers);
    }

    do
    {
        num_ptr++;
        if (check_if_parameter_is_negative(num_ptr)) negative_number = true;
        sum += atoi(num_ptr);
        num_ptr = strpbrk(num_ptr, delimiters);
    } while (num_ptr != NULL);
    
    if (true == negative_number) return 0;
    return sum;
}

static bool check_if_parameter_is_negative(char *num_ptr)
{
    if (atoi(num_ptr)<0) 
    {
        printf("negatives not allowed: %d\r\n", atoi(num_ptr));
        return 1;
    }
    return 0;
}

static int set_delimiters(const char *const numbers, char *delimiters)
{
    if (0 == strncmp(numbers, "//", 2))
    {
        if (*(numbers+3) != '\n') return 1;
        delimiters[0] = *(numbers+2);
    }
    else
    {
        delimiters[0] = ',';
    }
    strcat(delimiters, "\n");
    
    return 0;
}