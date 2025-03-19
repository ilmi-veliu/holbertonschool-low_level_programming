#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Returns the sum of two numbers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - Returns the product of two numbers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - Returns the result of division
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of a / b
 *         Exits with error if b == 0
 */
int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a / b);
}

/**
 * op_mod - Returns the remainder of division
 * @a: First integer
 * @b: Second integer
 *
 * Return: Remainder of a % b
 *         Exits with error if b == 0
 */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a % b);
}
