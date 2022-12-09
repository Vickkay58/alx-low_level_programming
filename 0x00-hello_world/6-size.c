#include <stdio.h>
/**
 * main - entry
 *
 * description: when data types
 * Return: 0
 */
int main(void)
{
	char q;
	int w;
	long int e;
	long long int r;
	float f;
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of long int: %lu byte(s)\n", sizeof(long int));
	printf("size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}	
