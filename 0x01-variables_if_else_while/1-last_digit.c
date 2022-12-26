#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: checks on the last digit of the assigned var
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("last digit of %i is %i and is greater than 5\n", n, m);
	else if (last < 6 && m != 0)
		printf("last digit of %i is %i and is lass than 6 and not 0\n", n m);
	else if (last < 6)
		prinntf("last digit of %i is %i and is 0\n", n, m);
	return (0);
}
