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
	printf( %d"is positive\n",n);

	if (n == 0)
	printf("%d is zero\n",n);

	if (n < 0)
	printf("%d is negative\n",n);
	return (0);
}
