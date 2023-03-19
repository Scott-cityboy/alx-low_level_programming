#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5", n, ld);
	else if (ld == 0)
		printf("Last digit of %d is %d and is 0", n, ld);
	else if (ld < 6 && !ld)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, ld);
	printf("\n");

	return (0);
}
