#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different combinations of two digits
 *Numbers must be separated by ,, followed by a space
 *The two digits must be different
 *01 and 10 are considered the same combination of the two digits 0 and 1
 *Print only the smallest combination of two digits
 *Numbers should be printed in ascending order, with two digits
 *You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 *You can only use putchar five times maximum in your code
 *You are not allowed to use any variable of type char
 *All your code should be in the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d, p;

	for (d = '0'; d < '9'; d++)
	{
		for (p = d + 1; p <= '9'; p++)
		{
			if (p != d)
			{
				putchar(d);
				putchar(p);

				if (d == '8' && p == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
