#include "main.h"
/**
 * print alphabet - prints the alphabets in lower case
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);
	_putchar('\n');
}
