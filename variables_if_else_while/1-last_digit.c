#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
int n;
int panda;
srand(time(NULL));

	n = rand() - RAND_MAX / 2;
	panda = n %10;

	printf("the last digit of %d is %d", n , panda);

	if (panda > 5)
		printf("the last digit of %d is %d and is 0\n",n , panda);

	if (panda == 0)
		 printf("and is 0\n");

	if (panda <6)
		printf("and is less than 6 and not 0\n");
	return (0);
}
