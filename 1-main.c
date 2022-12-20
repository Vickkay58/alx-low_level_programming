#include <stdio.h>
/**
 * main - address of variables
 *
 * Return: Always 0
 */

int main(void)
{
	char c;
	int n;

	printf("Address of variable 'c' : %p\n", &c);
	printf("Address of variable 'd' : %p\n", &n);
	return (0);
}
