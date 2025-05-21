#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: always (0) sucess
 */
int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (char ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

