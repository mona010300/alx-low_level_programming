#include <stdio.h>

/**
 * main - Print sizes of characters
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
       	printf("Size of a char: %Id byte(s)\n", sizeof(c));
	printf("Size of an int: %Id byte(s)\n", sizeof(i));
	printf("Size of a long int: %Id byte(s)\n", sizeof (li));
	printf("Size of a long long int: %Id byte(s)\n", sizeof (lli));
	printf("Size of a float: %Id byte(s)\n", sizeof(f));
	return (0);
}
