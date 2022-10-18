#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program entry point
 * Return: 0 if no error, non-zero alue if error
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (ldigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldigit);
	}
	else if (ldigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ldigit);
	}
	else if (ldigit < 6 && ldigit ! = 0)
	{
		printf("Last digiit of %d is %d and is less than 6 and not 0\n", n, idigit);
	}
	return (0)
}
