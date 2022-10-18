#include <stdio.h>

/**
 * main-printing entry point
 * Returen:0 if no error, non zero if error
 **/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{putchar(i);
	}
	putchar('\n');
	return (0);
}
