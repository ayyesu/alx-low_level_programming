#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *Write a program that prints the alphabet in lowercase, followed by a new line.

 *You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 *All your code should be in the main function
 *You can only use putchar twice in your code
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
