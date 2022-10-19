#include "main.h"

/**
 * print_alphabet - print all aphabet in lower case
 * Return: On success 1.
 */

void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

}
