#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() % RAND_MAX;

	if (n > 0)
	printf("is positive\n");

	if (n == 0)
	printf("is zero\n");

	if (n < 0)
	printf("is negative\n");
	return (0);
}
