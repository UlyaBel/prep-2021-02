#include "utils.h"
#include "string.h" // --- size_t work with yhis library

size_t timer_from(unsigned char from)
{
    size_t counter = 0;              // --- counter need initial value
    for (char i = from; i >= 0; i--) // --- i must be signed char
    {
        ++counter;
        printf("%d", i); // --- wrong out without %d
    }
    return counter;
}

// TODO: Implement `power of` function
/*
int custom_pow(int base, int power) {
    return 0;
}
*/
