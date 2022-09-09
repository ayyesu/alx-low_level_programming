#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints all possible combinations of single-digit numbers.
 *
 *Numbers must be separated by ,, followed by a space
 *Numbers should be printed in ascending order
 *You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 *All your code should be in the main function
 *You can only use putchar four times maximum in your code
 *You are not allowed to use any variable of type char
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 48);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}

		++num;
	}
	putchar('\n');

	return (0);
}
