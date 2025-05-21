#include <stdio.h>
/**
 * Main - entry point of the program: this program prints all the alphabets 
 * in lower case 
 *
 * return: always(0) success
 */
int main()
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
