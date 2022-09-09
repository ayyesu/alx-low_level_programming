#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 *You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 *All your code should be in the main function
 *You can only use putchar three times in your code
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char small = 'a';
	char big = 'A';

	/*prints a - z*/
	while (small <= 'z')
	{
		putchar(small);
		++small;
	}

	/*print A - Z*/
	while (big <= 'Z')
	{
		putchar(big);
		++big;
	}
	putchar('\n');

	return (0);
}
