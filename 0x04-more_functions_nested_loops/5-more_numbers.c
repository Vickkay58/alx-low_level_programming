#include "main.h"
/**
 * more_numbers - print more num
 *
 * Return: not available
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 14; j++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (i % 10 + '0');
		}
		_putchar('\n');
	}
}
