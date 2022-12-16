#include "main.h"
/**
 * Print_triangle - prints a triangle.
 * @size: number of lines.
 * Return: no return
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = i; j < (size - i); j++)
			_putchar(' ');
		for (j-- j < size; j++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}