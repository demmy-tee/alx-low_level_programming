#include <stdio.h>
/**
  * main - entry point
  * Return: 0 (success)
  */
int main(void)
{
	printf("size of a char: %lu bytes(s)", sizeof(char));
	printf("size of an int: %lu bytes(s)", sizeof(int));
	printf("size of a long int: %lu bytes(s)", sizeof(long int));
	printf("size of Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("size of size of a float: %lu bytes(s)", sizeof(float));
	return (0);
}
