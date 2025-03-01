#include "main.h"

int _atoi(char *s)
{
    int sign = 1;
    int result = 0;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;
        else if (*s >= '0' && *s <= '9')
        {
            if (result > (2147483647 - (*s - '0')) / 10)
                return (sign == 1 ? 2147483647 : -2147483648);
            result = result * 10 + (*s - '0');
        }
        el

