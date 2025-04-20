#include <stdio.h>
/**
 * main - entry-point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int c;
	char a;
	long b;
	long long d;
	float e;

	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu byte(s)\n", sizeof(c));
	printf("Size of a long int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("Size of a float: %zu byte(s)\n", sizeof(e));
}
