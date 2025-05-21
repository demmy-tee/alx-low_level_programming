#include <stdio.h>
/**
 * main - entry point of the program: this program prints all the alphabets
 * in lower case
 *
 * Return: always(0) success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
